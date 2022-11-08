#ifndef MUESTRA_H_INCLUDED
#define MUESTRA_H_INCLUDED
#include"ArchivoArticulo.h"
#include"Fecha.h"
#include "ArchivoCliente.h"

class Muestra{
private:
    ArchivoArticulo art;
    Fecha fechaHoy;
    ArchivoCliente cli;
public:
    void cargar();
    void mostrar();

};



#endif // MUESTRA_H_INCLUDED
