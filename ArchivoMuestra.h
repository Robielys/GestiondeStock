#ifndef ARCHIVOMUESTRA_H_INCLUDED
#define ARCHIVOMUESTRA_H_INCLUDED
#include "Muestra.h"

class ArchivoMuestra{
public:
    void listar(Muestra* muest, int nroRegistro);
    Muestra BuscarMuestra(int nroID);
    bool guardar(Muestra art);
    /*bool guardarModificacion(Muestra muest, int posicion);*/
    int buscar(int ID);
    int getCantidad();
    int CrearID();


};


#endif // ARCHIVOMUESTRA_H_INCLUDED
