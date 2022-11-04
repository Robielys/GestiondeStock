#include<iostream>
#include<string.h>
#include "rlutil.h"
#include "Domicilio.h"
#include "Cliente.h"
#include "Articulo.h"
#include "Funciones.h"
#include"ArchivoArticulo.h"
#include "Cliente.h"
#include "ArchivoCliente.h"

using namespace std;

void MenuPrincipal()
{

    rlutil::cls();
    cout<< "-----------" << " Menu Principal " << "-----------" << endl;
    cout<< " 1.Muestras" << endl;
    cout<< " 2.Clientes" << endl;
    cout<< " 3.Categoria" << endl;
    cout<< " 4.Articulos" << endl;
    cout<< "--------------------------------------" << endl;
    cout<< " 0. Salir" << endl;
    cout<< endl;
    cout<< " Ingresar el Numero de la Opcion: ";

}

void ValidarOpcionesMenu(int OpcionesMenu, int Tam)
{
    int validar = 1;
    while(validar == 1)
    {
        if(OpcionesMenu>=0 && OpcionesMenu<=Tam)
        {
            validar = 0;
        }
        else
        {
            cout<<endl;
            cout<< " ���LA OPCION INGRESADA NO ES VALIDA!!!"<< endl;
            cout<< " POR FAVOR, INGRESAR UNA OPCION DISPONIBLE: ";
            cin>>OpcionesMenu;
        }

    }
}

void OpcionSeleccionada(int OpcionMenu)
{
    ValidarOpcionesMenu(OpcionMenu, 4);
    switch(OpcionMenu)
    {
    case 1:
    {
        int num;
        do
        {

            SubMenuMuestras();
            cin>>num;
            OpcionSeleccionadaMuestras(num);
        }
        while(num != 0);
        system("pause");
    }
    break;
    case 2:
    {
        int num;
        do
        {
            SubMenuCliente();
            cin>>num;
            OpcionSeleccionadaCliente(num);
        }
        while(num != 0);
        system("pause");

    }
    break;
    case 3:
    {
        int num;
        do
        {
            SubMenuCategoria();
            cin>>num;
            OpcionSeleccionadaCategoria(num);
        }
        while(num != 0);
        system("pause");
    }
    break;
    case 4:
    {
        int num;
        do
        {
            SubMenuArticulos();
            cin>>num;
            OpcionSeleccionadaArticulos(num);
        }
        while(num != 0);
        system("pause");
    }
    case 0:
    {
        cout << endl;
        cout<<"Gracias por usar el programa"<< endl;
    }
    break;
    }
}

void SubMenuMuestras()
{
    rlutil::cls();
    cout<< "-----------" << " Menu de Muestras " << "-----------" << endl;
    cout<< " 1.Lista de pedidos de muestras" << endl;
    cout<< " 2.Cargar nueva muestra" << endl;
    cout<< " 3.Dar de baja un pedido de muestras" << endl;
    cout<< " 4.Modificar un pedido de muestras" << endl;
    cout<< "----------------------------------------" << endl;
    cout<< " 0.Volver al menu principal" << endl;
    cout<< endl;
    cout<< " Ingresar el Numero de la Opcion: ";

}

void SubMenuCliente()
{
    rlutil::cls();
    cout<< "-----------" << " Menu de clientes " << "-----------" << endl;
    cout<< " 1.Lista de clientes" << endl;
    cout<< " 2.Cargar nuevo cliente" << endl;
    cout<< " 3.Dar de baja a un cliente" << endl;
    cout<< " 4.Modificar un cliente" << endl;
    cout<< "----------------------------------------" << endl;
    cout<< " 0. Volver al menu principal" << endl;
    cout<< endl;
    cout<< " Ingresar el Numero de la Opcion: ";
}
void SubMenuCategoria()
{
    rlutil::cls();
    cout<< "-----------" << " Menu de categoria " << "-----------" << endl;
    cout<< " 1.Lista de categoria" << endl;
    cout<< " 2.Cargar nueva categoria" << endl;
    cout<< " 3.Dar de baja una categoria" << endl;
    cout<< " 4.Modificar una categoria" << endl;
    cout<< "-----------------------------------------" << endl;
    cout<< " 0. Volver al menu principal" << endl;
    cout<< endl;
    cout<< " Ingresar el Numero de la Opcion: ";
}
void SubMenuArticulos()
{
    rlutil::cls();
    cout<< "-----------" << " Menu de articulos " << "-----------" << endl;
    cout<< " 1.Lista de todos los articulos" << endl;
    cout<< " 2.Cargar nuevo articulo" << endl;
    cout<< " 3.Dar de baja un articulo" << endl;
    cout<< " 4.Modificar un articulo" << endl;
    cout<< "-----------------------------------------" << endl;
    cout<< " 0. Volver al menu principal" << endl;
    cout<< endl;
    cout<< " Ingresar el Numero de la Opcion: ";
}
void OpcionSeleccionadaMuestras(int opcionM)
{
    ValidarOpcionesMenu(opcionM, 4);
    switch(opcionM)
    {
    case 1:
    {
        rlutil::cls();

        system("pause");

    }
    break;

    case 2:
    {
        rlutil::cls();

        system("pause");
    }
    break;

    case 3:
    {
        rlutil::cls();

        system("pause");
    }
    break;

    case 4:
    {
        rlutil::cls();

        system("pause");
    }
    break;

    case 0:
    {

    }
    break;
    }
}

void OpcionSeleccionadaCliente(int opcionC)
{
    ValidarOpcionesMenu(opcionC, 4);
    switch(opcionC)
    {
    case 1:
    {
        rlutil::cls();
        ArchivoCliente cli;
        int cantidad = cli.getCantidad();
        Cliente* Cli= new Cliente[cantidad];

        cli.listar(Cli, cantidad);
        MembreteCliente();
        for(int i=0; i<cantidad; i++)
        {
            Cli[i].Mostrar();
        }
        delete[] Cli;

        system("pause");
    }
    break;

    case 2:
    {
        rlutil::cls();
        Cliente cli;
        ArchivoCliente CarCli;
        cli.Cargar();
        if(CarCli.guardar(cli))
        {
            cout << "Cliente guardado satisfactoriamente" << endl;
        }
        else
        {
            cout << "No se pudo guardar el cliente" << endl;
        }
        system("pause");
    }
    break;

    case 3:
        {
            rlutil::cls();
            ArchivoCliente CarCli;
            Cliente cli;
            int ID, posicion;
            cout << "Ingresar ID que desea dar de baja: ";
            cin >> ID;

            posicion =CarCli.buscar(ID);

            if(posicion != -1)
            {
                cout << "si existe" << endl;

                cli=CarCli.BuscarCli(posicion);
                MembreteCliente();
                cli.Mostrar();
                cli.setEstado(false);
                if(CarCli.guardarModificacion(cli, posicion))
                {
                    cout<< "Este cliente se dio de baja correctamente" <<endl;
                }
                else
                {
                    cout << "no se pudo dar de baja este cliente" << endl;

                }
            }
            else
            {
                cout << "No existe ID";
            }


            system("pause");
        }
        break;

    case 4:
    {
        rlutil::cls();
        ArchivoCliente CarCli;
        Cliente cli;
        int ID, posicion, opcion;
        string  can;
        cout << " �Que accion desea realizar?"<< endl;
        cout << " 1.Modificar Correo?"<< endl;
        cout << " 2.Modificar Nombre Empresa?" << endl;
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "Ingresar ID que desea Modificar: ";
            cin >> ID;

            posicion =CarCli.buscar(ID);

            if(posicion != -1)
            {
                cout << "si existe" << endl;

                cli=CarCli.BuscarCli(posicion);
                MembreteCliente();
                cli.Mostrar();
                cout << "Ingresar el Correo: ";
                cin >> can;
                cli.setCorreo(can);
                if(CarCli.guardarModificacion(cli, posicion))
                {
                    cout<< "se modifico correctamente" <<endl;
                }
                else
                {
                    cout << "no se guardo" << endl;

                }
            }
            else
            {
                cout << "No existe ID";
            }
        }
        else
        {
            if (opcion == 2)
            {
                cout << "Ingresar ID que desea Modificar: ";
                cin >> ID;

                posicion =CarCli.buscar(ID);

                if(posicion != -1)
                {
                    cout << "si existe" << endl;

                    cli=CarCli.BuscarCli(posicion);
                    MembreteCliente();
                    cli.Mostrar();
                    cout << "Cantidad a ingresar: ";
                    cin >> can;
                    cli.setNombreEmpresa(can);
                    if(CarCli.guardarModificacion(cli, posicion))
                    {
                        cout<< "se modifico correctamente" <<endl;
                    }
                    else
                    {
                        cout << "no se guardo" << endl;

                    }
                }
                else
                {
                    cout << "No existe ID";
                }
            }
            else
            {

            }
        }

        system("pause");
    }
    break;

    case 0:
    {

    }
    break;
    }
}
void OpcionSeleccionadaCategoria(int opcionCa)
{
    ValidarOpcionesMenu(opcionCa, 4);
    switch(opcionCa)
    {
    case 1:
    {
        rlutil::cls();

        system("pause");
    }
    break;

    case 2:
    {
        rlutil::cls();

        system("pause");
    }
    break;

    case 3:
    {
        rlutil::cls();

        system("pause");
    }
    break;

    case 4:
    {
        rlutil::cls();

        system("pause");
    }
    break;

    case 0:
    {
    }
    break;
    }
}
void OpcionSeleccionadaArticulos(int opcionA)
{
    ValidarOpcionesMenu(opcionA, 4);
    switch(opcionA)
    {
    case 1:
    {
        rlutil::cls();
        ArchivoArticulo art;
        int cantidad = art.getCantidad();
        Articulo* Art= new Articulo[cantidad];

        art.listar(Art, cantidad);
        MembreteArticulo();
        for(int i=0; i<cantidad; i++)
        {
            Art[i].Mostrar(i);
        }
        delete[] Art;

        system("pause");
    }
    break;

    case 2:
    {
        rlutil::cls();
        Articulo Art;
        ArchivoArticulo CarArt;
        Art.Cargar();
        if(CarArt.guardar(Art))
        {
            cout << "Articulo guardado sastifactoriamente" << endl;
        }
        else
        {
            cout << "No se pudo guardar el articulo" << endl;
        }

        system("pause");

    }
    break;

    case 3:
    {
        rlutil::cls();

        system("pause");
    }
    break;

    case 4:
    {
        rlutil::cls();
        ArchivoArticulo CarArt;
        Articulo Art;
        int ID, posicion, can, opcion;
        cout << " �Que accion desea realizar?"<< endl;
        cout << " 1.Aumentar Stock"<< endl;
        cout << " 2.Disminuir Stock" << endl;
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "Ingresar ID que desea Modificar: ";
            cin >> ID;

            posicion =CarArt.buscar(ID);

            if(posicion != -1)
            {
                cout << "si existe" << endl;

                Art=CarArt.BuscarArt(posicion);
                MembreteArticulo();
                Art.Mostrar(0);
                cout << "Cantidad a ingresar: ";
                cin >> can;
                Art.setStock(can);
                if(CarArt.guardarModificacion(Art, posicion))
                {
                    cout<< "se modifico correctamente" <<endl;
                }
                else
                {
                    cout << "no se guardo" << endl;

                }
            }
            else
            {
                cout << "No existe ID";
            }
        }
        else
        {
            if (opcion == 2)
            {
                cout << "Ingresar ID que desea Modificar: ";
                cin >> ID;

                posicion =CarArt.buscar(ID);

                if(posicion != -1)
                {
                    cout << "si existe" << endl;

                    Art=CarArt.BuscarArt(posicion);
                    MembreteArticulo();
                    Art.Mostrar(0);
                    cout << "Cantidad a ingresar: ";
                    cin >> can;
                    Art.desStock(can);
                    if(CarArt.guardarModificacion(Art, posicion))
                    {
                        cout<< "se modifico correctamente" <<endl;
                    }
                    else
                    {
                        cout << "no se guardo" << endl;

                    }
                }
                else
                {
                    cout << "No existe ID";
                }
            }
            else
            {

            }
        }
        system("pause");
    }
    break;

    case 0:
    {

    }
    break;
    }
}

void MembreteArticulo()
{
    rlutil::cls();
    cout << " --------------------------------------------------------------------"<< endl;
    cout << " | "<< "ID" << " | " << "Categoria" << " | " << "Modelo" << " | " << "Material" << " | " << "Capacidad"
         << " | " << "Diametro" << " | " << "Stock" << "|"<< endl;
    cout << " --------------------------------------------------------------------"<< endl;
}

string espacio(int t, int v)
{
    int e = 0;
    string te="";
    e = v + t;

    for(int i=0; i<e; i++)
    {
        te= te+" ";

    }
    return te;
}

void MembreteCliente()
{

    rlutil::cls();
    cout << " ---------------------------------------------------------------------"<< endl;
    cout << " | "<< "ID" << " |   " << "Nombre Empresa" << " |  " << "Cuit" << "      |         " << "Correo" << "              | " << endl;
    cout << " ---------------------------------------------------------------------"<< endl;

}
