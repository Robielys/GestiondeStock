#ifndef MUESTRA_H_INCLUDED
#define MUESTRA_H_INCLUDED
#include"ArchivoArticulo.h"
#include"Fecha.h"
#include "ArchivoCliente.h"

class Muestra{
private:
    int _ID;
    char _NombreCliente[50];
    string _fechaHoy;
public:
    void setID(int id);
    void setNombreCliente(string NombreCliente);
    void setNombCliente(Cliente NombreCliente);
    int getID();
    string getFechaHoy();
    void setFechaHoy(string aux);
    string getNombreCliente();
    void mostrar();

};



#endif // MUESTRA_H_INCLUDED
