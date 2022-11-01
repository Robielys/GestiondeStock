#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED

class Articulo{
private:
    int _ID;
    char _Categoria[50];
    char _Modelo[50];
    char _TipoDeMaterial[50];
    int _Capacidad;
    int _Diametro;
    int _Stock;
    bool _Estado;
public:
    void setID(int ID);
    void setCategoria(string Categoria);
    void setModelo(string Modelo);
    void setTipoDeMaterial(string TipoDeMaterial);
    void setCapacidad(int Capacidad);
    void setDiametro(int Diametro);
    void setStock(int Stock);
    void desStock(int stock);
    void setEstado(bool Estado);
    int getID();
    string getCategoria();
    string getModelo();
    string getTipoDeMaterial();
    int getCapacidad();
    int getDiametro();
    int getStock();
    bool getEstado();
    void Cargar();
    void Mostrar(int Fila);
    bool modificar();
};



#endif // ARTICULO_H_INCLUDED
