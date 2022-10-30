#ifndef ARCHIVOARTICULO_H_INCLUDED
#define ARCHIVOARTICULO_H_INCLUDED
#include "Articulo.h"

class ArchivoArticulo{
public:
    void listar(Articulo* art, int nroRegistro);
    bool guardar(Articulo art);
    bool guardarModificacion(Articulo art, int posicion);
    int buscar(int ID);
    bool baja(int pos);
    int getCantidad();


};

#endif // ARCHIVOARTICULO_H_INCLUDED
