#include <iostream>
using namespace std;
#include "Fecha.h"
#include "Funciones.h"
#include "Domicilio.h"
#include "Articulo.h"

int main(){
    int OpcionesMenu;
    do
    {
        MenuPrincipal();
        cin>>OpcionesMenu;
        OpcionSeleccionada(OpcionesMenu);


    }
    while(OpcionesMenu != 0);

}
