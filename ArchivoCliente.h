#ifndef ARCHIVOCLIENTE_H_INCLUDED
#define ARCHIVOCLIENTE_H_INCLUDED
#include"Cliente.h"

class ArchivoCliente{
public:
    void listar(Cliente* cli, int nroRegistro);
    Cliente BuscarCli(int nroID);
    bool guardar(Cliente cli);
    bool guardarModificacion(Cliente cli, int posicion);
    int buscar(int ID);
    int getCantidad();
    int CrearID();
};

#endif // ARCHIVOCLIENTE_H_INCLUDED
