
#include<iostream>
using namespace std;
#include "ArchivoArticulo.h"
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
bool ArchivoArticulo::guardar(Articulo art)
{
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
/*int ArchivoArticulo::buscar(int ID)
{
    Articulo aux;
    int cantArticulos = ArchivoArticulo.getCantidad();
    for (int i = 0; i < cantArticulos; i++)
    {
        aux = ArchivoArticulo.listar(i);
        if (aux.getID() == ID)
        {
            return i;
        }
    }
    return -1;
}*/

bool ArchivoArticulo::baja(int pos){
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
bool guardarModificacion(Articulo art, int posicion){
   FILE* pFile = fopen("Articulos,dat","rb+");
   if(pFile == nullptr){
    cout << "No se encontro Archivo";
    return false;
   }
   fseek(pFile,posicion * sizeof (Articulo),SEEK_SET);
   fwrite(&art,sizeof(Articulo),1,pFile);
   fclose(pFile);
   return true;
}
