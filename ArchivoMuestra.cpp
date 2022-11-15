#include<iostream>
using namespace std;
#include "ArchivoMuestra.h"
#include "Muestra.h"
#include "Fecha.h"

int ArchivoMuestra::CrearID(){
return getCantidad() + 1;
}
void ArchivoMuestra::listar(Muestra* muest, int nroRegistro)
{
    FILE* pFile;
    pFile = fopen("Muestras.dat", "rb");
    if (pFile == NULL)
    {
        exit(200);
    }
    fread(muest, sizeof(Muestra), nroRegistro, pFile);
    fclose(pFile);
}
Muestra ArchivoMuestra::BuscarMuestra(int nroID){
    Muestra muest;
    FILE* pFile;
    pFile = fopen("Muestras.dat", "rb");
    if (pFile == NULL)
    {
        exit(200);
    }
    fseek(pFile, nroID * sizeof(Muestra),SEEK_SET);
    fread(&muest, sizeof(Muestra), 1, pFile);
    fclose(pFile);

    return muest;
}
bool ArchivoMuestra::guardar(Muestra muest)
{
    muest.setID(CrearID());

    FILE* pFile;
    pFile = fopen("Muestras.dat", "ab");
    if (pFile == NULL)
    {
        return false;
    }
    fwrite(&muest, sizeof(Muestra), 1, pFile);
    fclose(pFile);
    return true;
}
int ArchivoMuestra::buscar(int ID)
{
    int i = 0;
    Muestra aux;
   FILE* pFile;
    pFile = fopen("Muestras.dat", "rb");
    if (pFile == NULL)
    {
        return false;
    }
    while(fread(&aux,sizeof(Muestra),1,pFile)==1)
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

int ArchivoMuestra::getCantidad()
{
    int cantidad = 0;
    FILE* pFile = fopen("Muestras.dat","rb");
    if(pFile == nullptr)
    {
        cout<< "No existe archivo";
        exit(1);
    }

    fseek(pFile,0,SEEK_END);
    cantidad = ftell(pFile)/sizeof(Muestra);
    fclose(pFile);
    return cantidad;
}
/*bool ArchivoArticulo::guardarModificacion(Articulo art, int posicion){
   FILE* pFile = fopen("Articulos.dat","rb+");
   if(pFile == nullptr){
    cout << "No se encontro Archivo";
    exit(10);
   }
   fseek(pFile,posicion * sizeof (Articulo),SEEK_SET);
   fwrite(&art,sizeof(Articulo),1,pFile);
   fclose(pFile);
   return true;
}*/
