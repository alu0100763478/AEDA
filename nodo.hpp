#pragma once
#include <iostream>
#include <cstdio>

using namespace std;
class Nodo{
    private:
    typedef int TDATO;
    Nodo* siguiente;
    Nodo* anterior;
    
    public:
    
    Nodo(TDATO dato);
    void mostrarNodo();

};