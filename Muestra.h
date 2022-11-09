#ifndef MUESTRA_H_INCLUDED
#define MUESTRA_H_INCLUDED
#include"ArchivoArticulo.h"
#include"Fecha.h"
#include "ArchivoCliente.h"

class Muestra{
private:
    int _ID;
    Fecha _fechaHoy;
    char _NombreCliente[50];
public:
    void setID(int id);
    void setNombreCliente(string NombreCliente);
    int getID();
    string getNombreCliente();
    void mostrar();

};



#endif // MUESTRA_H_INCLUDED
