
#include<iostream>
#include <string.h>
using namespace std;
#include "Articulo.h"
#include "ArchivoArticulo.h"
#include "rlutil.h"
#include"Funciones.h"
void Articulo::setID(int ID)
{
    ArchivoArticulo CanArt;
    _ID =ID;
}
void Articulo::setCategoria(string Categoria)
{
    strcpy(_Categoria, Categoria.c_str());
}
void Articulo::setModelo(string Modelo)
{
    strcpy(_Modelo, Modelo.c_str());
}
void Articulo::setTipoDeMaterial(string TipoDeMaterial)
{
    strcpy(_TipoDeMaterial, TipoDeMaterial.c_str());
}
void Articulo::setCapacidad(int Capacidad)
{
    _Capacidad = Capacidad;
}
void Articulo::setDiametro(int Diametro)
{
    _Diametro = Diametro;
}
void Articulo::setStock(int Stock)
{
    if(Stock > 0){
    _Stock += Stock;
    }
}
void Articulo::desStock(int stock){
    if(_Stock >= stock){
        _Stock -= stock;
    }else{
        cout << "Cantidad ingresa es mayor al stock disponible"<< endl;
    }
}
void Articulo::setEstado(bool Estado)
{
    _Estado = Estado;
}
int Articulo::getID()
{
    return _ID;
}
string Articulo::getCategoria()
{
    return _Categoria;
}
string Articulo::getModelo()
{
    return _Modelo;
}
string Articulo::getTipoDeMaterial()
{
    return _TipoDeMaterial;
}
int Articulo::getCapacidad()
{
    return _Capacidad;
}
int Articulo::getDiametro()
{
    return _Diametro;
}
int Articulo::getStock()
{
        return _Stock;
}
bool Articulo::getEstado()
{
    return _Estado;
}

void Articulo::Cargar()
{
    cout << "Ingresar Categoria: ";
    cin >> _Categoria;
    cout << "Ingresar Modelo: ";
    cin >> _Modelo;
    cout << "Ingresar Tipo de Material: ";
    cin >> _TipoDeMaterial;
    cout << "Ingresar Capacidad: ";
    cin >> _Capacidad;
    cout << "Ingresar Diametro: ";
    cin >> _Diametro;
    cout << "Ingresar Stock: ";
    cin >> _Stock;
    _Estado = true;
}
void Articulo::Mostrar()
{
    if(_Estado == true)
    {
        /*cout << " |  " << _ID << " |";
        cout << _Categoria << "     |";
        cout << _Modelo << "      |";
        cout << _TipoDeMaterial << "       |";
        cout << _Capacidad << "cc" << "      |";
        cout << _Diametro << "mm" << "      |";
        cout << _Stock << "   |" << endl;*/
        if(_ID <10)
        {
            string cat = _Categoria;

            cout << espacio(1,2) <<_ID << espacio(sizeof(Articulo)/40,0);
            if(cat == "Tapa" || cat == "Pote")
            {
                cout << _Categoria << espacio(sizeof(Articulo)/22,0)<< _Modelo << espacio(sizeof(Articulo)/20,0)
                     << _TipoDeMaterial << espacio(sizeof(Articulo)/20,0)<< _Capacidad << "cc" << espacio(sizeof(Articulo)/20,0) << _Diametro << "mm" << espacio(sizeof(Articulo)/30,0) << _Stock<< endl;

            }
            else
            {
                if(cat == "Cremera")
                {
                    cout << _Categoria << espacio(sizeof(Articulo)/40,0)<< _Modelo << espacio(sizeof(Articulo)/20,0)
                         << _TipoDeMaterial << espacio(sizeof(Articulo)/20,0)<< _Capacidad << "cc" << espacio(sizeof(Articulo)/20,0) << _Diametro << "mm" << espacio(sizeof(Articulo)/30,0) << _Stock<< endl;
                }else{
                cout << _Categoria << espacio(sizeof(Articulo)/30,0)<< _Modelo << espacio(sizeof(Articulo)/20,0)
                     << _TipoDeMaterial << espacio(sizeof(Articulo)/20,0)<< _Capacidad << "cc" << espacio(sizeof(Articulo)/20,0) << _Diametro << "mm" << espacio(sizeof(Articulo)/30,0) << _Stock<< endl;
                }
            }
        }
        else
        {
            cout << espacio(2,2) <<_ID << espacio(sizeof(Articulo)/40,0)<< _Categoria << espacio(sizeof(Articulo)/30,0)<< _Modelo << espacio(sizeof(Articulo)/20,0)
                 << _TipoDeMaterial << espacio(sizeof(Articulo)/20,0)<< _Capacidad << "cc" << espacio(sizeof(Articulo)/20,0) << _Diametro << "mm" << espacio(_Diametro/sizeof(Articulo),0) << _Stock<< endl;

        }
    }
}
bool Articulo::modificar(){
    cout << "Ingresar Stock: ";
    cin >> _Stock;
}
