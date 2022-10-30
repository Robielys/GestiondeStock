
#include<iostream>
#include<string.h>
using namespace std;
#include "Domicilio.h"

Domicilio::Domicilio(){
}
void Domicilio::setPais(string Pais){
    strcpy(_Pais, Pais.c_str());
}
void Domicilio::setProvincia(string Provincia){
    strcpy(_Provincia, Provincia.c_str());
}
void Domicilio::setLocalidad(string Localidad){
    strcpy(_Localidad, Localidad.c_str());
}
void Domicilio::setCalle(string Calle){
    strcpy(_Calle, Calle.c_str());
}
void Domicilio::setAltura(int Altura){
    _Altura = Altura;
}
void Domicilio::setCP(int CP){
    _CP = CP;
}
void Domicilio::setEstado(bool Estado){
    _Estado = Estado;
}
string Domicilio::getPais(){
    return _Pais;
}
string Domicilio::getProvincia(){
    return _Provincia;
}
string Domicilio::getLocalidad(){
    return _Localidad;
}
string Domicilio::getCalle(){
    return _Calle;
}
int Domicilio::getAltura(){
    return _Altura;
}
int Domicilio::getCP(){
    return _CP;
}
bool Domicilio::getEstado(){
    return _Estado;
}
void Domicilio::Cargar(){
    cout << "ingresar el Pais: ";
    cin >> _Pais;
    cout << "ingresar la Provincia: ";
    cin >> _Provincia;
    cout << "ingresar la Localidad: ";
    cin >> _Localidad;
    cout << "ingresar la Calle: ";
    cin >> _Calle;
    cout << "ingresar La Altura: ";
    cin >> _Altura;
    cout << "ingresar el Codigo Postal: ";
    cin >> _CP;
    _Estado= true;

}
void Domicilio::Mostrar(){
    if(_Estado == true){
    cout << _Pais << endl;
    cout << _Provincia << endl;
    cout << _Localidad<< endl;
    cout << _Calle << endl;
    cout << _Altura << endl;
    cout << _CP << endl;
    }
}
