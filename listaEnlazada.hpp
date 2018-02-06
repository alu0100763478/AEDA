#include <iostream>
#include "nodo.hpp"
#include <cstdio>

using namespace std;

class Lista{
    
    private: 
    
        Nodo* top; 
    
    public:
    
    Lista(void);
    void insert_nodo(Nodo* nuevo);
    Nodo* delete_nodo(void);
    Nodo* getTop(void);
    void insert_after(Nodo* prev, Nodo* nuevo);
    Nodo* extract_after(Nodo* prev);
    ostream& write(ostream& os);
    bool empty(void);

};


