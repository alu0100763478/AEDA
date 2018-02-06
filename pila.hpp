#include <iostream>
#include "nodo.hpp"
#include <cstdio>
#include <iomanip>
#include <cassert>

using namespace std;

class Pila{
    
    private: 
    
        Nodo* head;

    public:
    
    Pila(void);
    void push(Nodo* nuevo);
    void pop(void);
    bool empty(void);
    Nodo* get_head(void);
    ostream& write(ostream& os);
    

};


