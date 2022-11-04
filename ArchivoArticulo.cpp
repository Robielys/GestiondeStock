
#include<iostream>
using namespace std;
#include "ArchivoArticulo.h"
#include "Articulo.h"

int ArchivoArticulo::CrearID(){
return getCantidad() + 1;
}
void ArchivoArticulo::listar(Articulo* art, int nroRegistro)
{
    FILE* pFile;
    pFile = fopen("Articulos.dat", "rb");
    if (pFile == NULL)
    {
        exit(100);
    }
    fread(art, sizeof(Articulo), nroRegistro, pFile);
    fclose(pFile);
}
Articulo ArchivoArticulo::BuscarArt(int nroID){
    Articulo art;
    FILE* pFile;
    pFile = fopen("Articulos.dat", "rb");
    if (pFile == NULL)
    {
        exit(100);
    }
    fseek(pFile, nroID * sizeof(Articulo),SEEK_SET);
    fread(&art, sizeof(Articulo), 1, pFile);
    fclose(pFile);

    return art;
}
bool ArchivoArticulo::guardar(Articulo art)
{
    art.setID(CrearID());
    FILE* pFile;
    pFile = fopen("Articulos.dat", "ab");
    if (pFile == NULL)
    {
        return false;
    }
    fwrite(&art, sizeof(Articulo), 1, pFile);
    fclose(pFile);
    return true;
}
int ArchivoArticulo::buscar(int ID)
{
    int i = 0;
    Articulo aux;
   FILE* pFile;
    pFile = fopen("Articulos.dat", "rb");
    if (pFile == NULL)
    {
        return false;
    }
    while(fread(&aux,sizeof(Articulo),1,pFile)==1)
    {
        if (aux.getID() == ID)
        {
            fclose(pFile);
            return i;
        }
        i++;
    }
    return -1;
}

int ArchivoArticulo::getCantidad()
{
    int cantidad = 0;
    FILE* pFile = fopen("Articulos.dat","rb");
    if(pFile == nullptr)
    {
        cout<< "No existe archivo";
        exit(1);
    }

    fseek(pFile,0,SEEK_END);
    cantidad = ftell(pFile)/sizeof(Articulo);
    fclose(pFile);
    return cantidad;
}
bool ArchivoArticulo::guardarModificacion(Articulo art, int posicion){
   FILE* pFile = fopen("Articulos.dat","rb+");
   if(pFile == nullptr){
    cout << "No se encontro Archivo";
    exit(10);
   }
   fseek(pFile,posicion * sizeof (Articulo),SEEK_SET);
   fwrite(&art,sizeof(Articulo),1,pFile);
   fclose(pFile);
   return true;
}
