#ifndef MUESTRA_H_INCLUDED
#define MUESTRA_H_INCLUDED
#include"ArchivoArticulo.h"
#include"Fecha.h"
#include "ArchivoCliente.h"

class Muestra{
private:
    int _ID;
    char _NombreCliente[50];
    Fecha _fechaHoy();
public:
    void setID(int id);
    void setNombreCliente(string NombreCliente);
    void setNombCliente(Cliente NombreCliente);
    int getID();
    void setFechaHoy(Fecha());
    void getFechaHoy(Fecha());
    string getNombreCliente();
    void mostrar();

};



#endif // MUESTRA_H_INCLUDED
