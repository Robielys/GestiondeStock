
#include<iostream>
using namespace std;

int CantidadRegistros();
void punto1();
void punto2();
bool ModificarArchivo(avion reg, int pos);
void VectorDinamico();
int maximoVector(int *v, int cant);



int main(void){



	return 0;
}
///funcion para guarda un cambio en un archivo
bool ModificarArchivo(avion reg, int pos){
    FILE* pFile;
    pFile= fopen("","rb+");
    if(pFile==NULL)return false;
    fseek(pFile, sizeof(avion)*pos,0);
    bool Guardo=fwrite(&reg, sizeof(avion),1, pFile);
    fopen(pFile);
    return Guardo;
}
/// Lee un archivo y busca algun tipo de cosa en especifico y cuenta cuantos hay
int CantidadRegistros(){
    avion aux;
    int pos=0, cant=0;
    while(aux.LeerDeDisco(pos++)){
        if(aux.getTipo()== 1)cant++;
    }
    return cant;
}
/// crear vector dinamico
void VectorDinamico(){
    avionesPropío *pa;
    int Cant;
    Cant=pa.cantidadRegistros();
    pa= new avionesPropio[Cant];
    if(pa==NULL) return;

    delete []pa;

}
/// muetra el vector dinamico
void MostrarAlgo(avionesPropio *pa, int cant){
    int i;
    for(i=0;i<cant;i++){
        pa[i].mostrar();
        cout << endl;
    }
}
/// busca el maximo de un vector y devuelve la posicion en donde esta
int maximoVector(int *v, int cant){
    int posMax; maximo;
    maximo=v[0];
    posMax=0;
    for(int i=1;i<cant;i++){
        if(v[i]>maximo){
            maximo = v[i];
            posMax = i;
            }
    }
    return posMax;
}
/// contar los registros de un archivo
int contarRegistros(){
    int cant;
    FILE *¨pFile= fopen("","rb");
    if(pFile== nullptr)return 0;
    fseek(pFile,0,SEEK_END);
    cant=ftell(pFile)/sizeof();
    fclose(pFile);
    return cant;
}

bool GrabarEnDisco(){
    FILE *pFile=fopen("","ab");
    if(pFile==NULL) return false;
    bool ecribio=fwrite(&obj, sizeof(),1,pFile);
    fclose(pFile);
    return escribio;
}
