#include "listaEnlazada.hpp"



void Lista::insert_nodo(Nodo* nuevo){
    
    
    if(top == NULL){
        top -> setSiguiente(nuevo);
        top = nuevo;
    }
    else{
        top -> setSiguiente(nuevo);
        nuevo -> setAnterior(top);
        top = nuevo;
    }
    
}

void Lista::delete_nodo(){

        if(top == 0){
            std::cerr << "ERROR: could not allocate storage\n";
            std::terminate();
        } 
        else{
        Nodo* aux = top;
        top = aux -> getAnterior() ;
        top -> setSiguiente(NULL);
        }
}

void Lista::mostrarLista(){
    
    std::cout << "Top: " << top -> mostrarNodo() << ".Anterior: " << top -> getAnterior() -> mostrarNodo() << ". Siguiente: " << top -> getSiguiente() << std::endl;
}

