
#include "Fecha.h"
#include <ctime>
using namespace std;

int Fecha::getDia(){
    return _Dia;
}
int Fecha::getMes(){
    return _Mes;
}
int Fecha::getAnio(){
    return _Anio;
}
void Fecha::setDia(int Dia){
    _Dia = Dia;
}
void Fecha::setMes(int Mes){
    _Mes = Mes;
}
void Fecha::setAnio(int Anio){
    _Anio = Anio;
}
Fecha::Fecha(int Dia, int Mes, int Anio){
    _Dia = Dia;
    _Mes = Mes;
    _Anio = Anio;
}
Fecha::Fecha(){
    time_t rawtime;
    struct tm timeinfo;

    time (&rawtime);
    timeinfo = *(localtime (&rawtime));

    _Dia = timeinfo.tm_mday;
    _Mes = timeinfo.tm_mon + 1;
    _Anio = timeinfo.tm_year + 1900;
}
string Fecha::toString(){
    string fecha;
    fecha = to_string(_Dia) + "/" + to_string(_Mes) + "/" + to_string(_Anio);
    return fecha;
}
