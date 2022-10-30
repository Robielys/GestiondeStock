#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include <string>

class Fecha{
private:
    int _Dia;
    int _Mes;
    int _Anio;
public:
    Fecha();
    Fecha(int Dia,int Mes,int Anio);
    void setDia(int Dia);
    void setMes(int Mes);
    void setAnio(int Anio);
    int getDia();
    int getMes();
    int getAnio();
    std::string toString();

};

#endif // FECHA_H_INCLUDED
