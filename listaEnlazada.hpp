#include "nodo.hpp"
#include <iostream>
#include <cstdio>

using namespace std;

class Lista{
    
    private: 
    
            Nodo* top; 
    
    public:
    
    void insert_nodo(Nodo* nuevo);
    void delete_nodo();
    void mostrarLista();

};


