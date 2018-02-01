#include "listaEnlazada.hpp"

void Lista::insert_nodo(Nodo* nuevo){
    
    top->siguiente = nuevo;
    nuevo -> anterior = top;
}

void Lista::mostrarLista(){
    
    std::cout << "Top: " << top.mostrarNodo() << std::endl;
}