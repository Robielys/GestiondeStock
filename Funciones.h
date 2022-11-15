#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include"Muestra.h"

void MenuPrincipal();
void ValidarOpcionesMenu(int OpcionesMenu, int Tam);
void OpcionSeleccionada(int OpcionMenu);
void SubMenuMuestras();
void SubMenuCliente();
void SubMenuCategoria();
void SubMenuArticulos();
void OpcionSeleccionadaMuestras(int opcionM);
void OpcionSeleccionadaCliente(int opcionC);
void OpcionSeleccionadaCategoria(int opcionCa);
void OpcionSeleccionadaArticulos(int opcionA);
void MembreteArticulo();
void MembreteArticulo2();
void MembreteCliente();
string espacio(int t, int v);
void EncabezadoPedidoMuestra(int mID);
bool ArchivoCsv(fstream MyFile);
void MembreteArchivoMuestra();
void CategoriaMostrar();



#endif // FUNCIONES_H_INCLUDED
