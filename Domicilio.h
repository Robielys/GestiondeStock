#ifndef DOMICILIO_H_INCLUDED
#define DOMICILIO_H_INCLUDED
using namespace std;

class Domicilio{
private:
    char _Pais[50];
    char _Provincia[50];
    char _Localidad[50];
    char _Calle[50];
    int _Altura;
    int _CP;
    bool _Estado;
public:
    Domicilio();
    void setPais(string Pais);
    void setProvincia(string Provincia);
    void setLocalidad(string Localidad);
    void setCalle(string Calle);
    void setAltura(int Altura);
    void setCP(int CP);
    void setEstado(bool Estado);
    string getPais();
    string getProvincia();
    string getLocalidad();
    string getCalle();
    int getAltura();
    int getCP();
    bool getEstado();
    void Cargar();
    void Mostrar();
    string toString(string p,string pr,string l,string c, string a);
};

#endif // DOMICILIO_H_INCLUDED
