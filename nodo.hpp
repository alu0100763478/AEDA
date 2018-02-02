#include <iostream>
#include <cstdio>

using namespace std;

typedef int TDATO;

class Nodo{
    private:
    TDATO valor;
    Nodo* siguiente;
    Nodo* anterior;
    
    public:
    
    Nodo(TDATO dato);
    TDATO mostrarNodo();
    void setSiguiente(Nodo* next);
    Nodo* getSiguiente();
    void setAnterior(Nodo* prev);
    Nodo* getAnterior();    

};