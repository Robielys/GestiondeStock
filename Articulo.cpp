
#include<iostream>
#include <string.h>
using namespace std;
#include "Articulo.h"
#include "ArchivoArticulo.h"

void Articulo::setID()
{
    ArchivoArticulo CanArt;
    _ID = CanArt.getCantidad() + 1;
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
    _Stock = Stock;
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
        cout << _ID << " |";
        cout << _Categoria << "|  ";
        cout << _Modelo << "    |";
        cout << _TipoDeMaterial << "       |";
        cout << _Capacidad << "cc" << "      |";
        cout << _Diametro << "mm" << "      |";
        cout << _Stock << "   |" << endl;
    }
}
bool Articulo::modificar(){
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

}
