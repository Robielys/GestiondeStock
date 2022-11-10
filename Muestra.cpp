#include <string>
#include<iostream>
#include<string.h>
#include "rlutil.h"
#include "Muestra.h"
#include "fecha.h"
using namespace std;

void Muestra::setID(int id)
{
    _ID = id;
}
void Muestra::setNombreCliente(string NombreCliente)
{
    strcpy(_NombreCliente, NombreCliente.c_str());
}
void Muestra::setFechaHoy(string aux){
    _fechaHoy= aux;
}

int Muestra::getID()
{
    return _ID;
}
string Muestra::getNombreCliente()
{
    return _NombreCliente;
}

void Muestra::mostrar()
{
    cout << "   "<<_ID<<"     ";
    cout << _NombreCliente<<endl;
    ///cout << _fechaHoy<<"       "<<endl;;
}