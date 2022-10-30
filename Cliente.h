#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

class Cliente{
private:
    char _NombreEmpresa[50];
    long _Cuit;
    char _Correo[50];
    bool _Estado;
public:
    void setNombreEmpresa(string NombreEmpresa);
    void setCuit(long Cuit);
    void setCorreo(string Correo);
    void setEstado(bool Estado);
    string getNombreEmpresa();
    long getCuit();
    string getCorreo();
    bool getEstado();
    void Cargar();
    void Mostrar();
};

#endif // CLIENTE_H_INCLUDED
