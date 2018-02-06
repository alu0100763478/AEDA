#include <iostream>
#include "nodo.hpp"

Nodo::Nodo(TDATO dato):
valor(dato),
siguiente(NULL)
{}


Nodo* Nodo::getSiguiente(){
    return siguiente;    
}

void Nodo::setSiguiente(Nodo* next){
    siguiente = next;
}

TDATO Nodo::getValor(){
    return valor;    
}

void Nodo::setValor(TDATO dato){
    valor = dato;
}

ostream& Nodo::write(ostream& os){
    os << valor;
	return os;
}

