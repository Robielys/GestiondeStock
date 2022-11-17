#ifndef ARCHIVOARTICULO_H_INCLUDED
#define ARCHIVOARTICULO_H_INCLUDED
#include "Articulo.h"

class ArchivoArticulo{
public:
    void listar(Articulo* art, int nroRegistro);
    Articulo BuscarArt(int nroID);
    bool guardar(Articulo art);
    bool guardarCSV(Articulo art);
    bool guardarModificacion(Articulo art, int posicion);
    int buscar(int ID);
    bool buscar1(string ID);
    bool baja(int pos);
    int getCantidad();
    int CrearID();


};

#endif // ARCHIVOARTICULO_H_INCLUDED
