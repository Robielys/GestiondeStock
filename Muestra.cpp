#include <string>
#include <cstring>
#include <iostream>
#include <string.h>
#include "rlutil.h"
#include "Muestra.h"
#include "fecha.h"
#include "ArchivoMuestra.h"
using namespace std;

void Muestra::setID(int id)
{
    _ID = id;
}
void Muestra::setNombreCliente(string NombreCliente)
{
    strcpy(_NombreCliente, NombreCliente.c_str());
}
<<<<<<< HEAD
void Muestra::setFechaHoy(string aux)
{
    _fechaHoy= aux;
}

string Muestra::getFechaHoy()
{
    return _fechaHoy;
=======
void Muestra::setFecha(Fecha aux){
    _fecha= aux;
}

Fecha Muestra::getFecha(){

return _fecha;
>>>>>>> 8bc31b0b28fc8066069cae1ae9b4b0f60e2a254b
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
<<<<<<< HEAD
    cout << _NombreCliente<<"   " << endl;
    ///cout << _fechaHoy<<"       "<<endl;
=======
    cout << _NombreCliente<<"   ";
    cout << _fecha.toString()<<"       "<<endl;
>>>>>>> 8bc31b0b28fc8066069cae1ae9b4b0f60e2a254b
}
