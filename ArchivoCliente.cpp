
#include<iostream>
using namespace std;

#include"Cliente.h"

#include"ArchivoCliente.h"

ArchivoCliente::CrearID()
{
    return getCantidad() + 1;

}

void ArchivoCliente::listar(Cliente* cli, int nroRegistro)
{

    FILE* pFile;
    pFile = fopen("Clientes.dat", "rb");
    if (pFile == NULL)
    {
        exit(100);
    }
    fread(cli, sizeof(Cliente), nroRegistro, pFile);
    fclose(pFile);
}
Cliente ArchivoCliente::BuscarCli(int nroID)
{

    Cliente cli;
    FILE* pFile;
    pFile = fopen("Clientes.dat", "rb");
    if (pFile == NULL)
    {
        exit(100);
    }
    fseek(pFile, nroID * sizeof(Cliente),SEEK_SET);
    fread(&cli, sizeof(Cliente), 1, pFile);
    fclose(pFile);

    return cli;
}
bool ArchivoCliente::guardar(Cliente cli)
{

    cli.setID(CrearID());
    FILE* pFile;
    pFile = fopen("Clientes.dat","ab");
    if (pFile == NULL)
    {
        return false;
    }
    fwrite(&cli, sizeof(Cliente), 1, pFile);
    fclose(pFile);
    return true;
}
bool ArchivoCliente::guardarModificacion(Cliente cli, int posicion)
{

    FILE* pFile = fopen("Clientes.dat","rb+");
    if(pFile == nullptr)
    {
        cout << "No se encontro Archivo";
        exit(10);
    }
    fseek(pFile,posicion * sizeof (Cliente),SEEK_SET);
    fwrite(&cli,sizeof(Cliente),1,pFile);
    fclose(pFile);
    return true;
}
int ArchivoCliente::buscar(int ID)
{

    int i = 0;
    Cliente cli;
    FILE* pFile;
    pFile = fopen("Clientes.dat", "rb");
    if (pFile == NULL)
    {
        return false;
    }
    while(fread(&cli,sizeof(Cliente),1,pFile)==1)
    {
        if (cli.getID() == ID)
        {
            fclose(pFile);
            return i;
        }
        i++;
    }
    return -1;
}

int ArchivoCliente::getCantidad()
{
    int cantidad = 0;
    FILE* pFile = fopen("Clientes.dat","rb");
    if(pFile == nullptr)
    {
        cout<< "No existe archivo";
        exit(1);
    }

    fseek(pFile,0,SEEK_END);
    cantidad = ftell(pFile)/sizeof(Cliente);
    fclose(pFile);
    return cantidad;
}

