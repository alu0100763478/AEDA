#include <iostream>
#include <cstdio>



using namespace std;

typedef int TDATO;

class Nodo{
    
    private:
    
    TDATO valor;
    Nodo* siguiente;

    public:
    
    Nodo(TDATO dato);
    
    void setSiguiente(Nodo* next);
    
    Nodo* getSiguiente();
    
    void setValor(TDATO dato);
    
    TDATO getValor();
    
    ostream& write(ostream& os);

};