
#include<iostream>
#include<string.h>
using namespace std;
#include "Cliente.h"

void Cliente::setNombreEmpresa(string NombreEmpresa)
{
    strcpy(_NombreEmpresa, NombreEmpresa.c_str());
}
void Cliente::setCuit(long Cuit)
{
    Cuit = Cuit;
}
void Cliente::setCorreo(string Correo)
{
    strcpy(_Correo, Correo.c_str());
}
void Cliente::setEstado(bool Estado)
{
    _Estado = Estado;
}
string Cliente::getNombreEmpresa()
{
    return _NombreEmpresa;
}
long Cliente::getCuit()
{
    return _Cuit;
}
string Cliente::getCorreo()
{
    return _Correo;
}
bool Cliente::getEstado()
{
    return _Estado;
}

void Cliente::Cargar()
{
    cout << "Ingresar Nombre de Empresa: ";
    cin >> _NombreEmpresa;
    cout << "Ingresar Cuit: ";
    cin >> _Cuit;
    cout << "Ingresar Correo: ";
    cin >> _Correo;
    _Estado = true;
}
void Cliente::Mostrar()
{
    if(_Estado == true)
    {
        cout << _NombreEmpresa << endl;
        cout << _Cuit << endl;
        cout << _Correo << endl;
    }

}
