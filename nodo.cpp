#include <iostream>
#include "nodo.hpp"

Nodo::Nodo(TDATO dato):
valor(dato),
siguiente(NULL),
anterior(NULL)
{}

TDATO Nodo::mostrarNodo(){
    return valor;
}

Nodo* Nodo::getSiguiente(){
    return siguiente;    
}

void Nodo::setSiguiente(Nodo* next){
    siguiente = next;
}

Nodo* Nodo::getAnterior(){
    return anterior;    
}
void Nodo::setAnterior(Nodo* prev){
    anterior = prev;
    
}