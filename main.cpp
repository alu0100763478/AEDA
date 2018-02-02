#include <iostream>
#include "listaEnlazada.hpp"

using namespace std;

int main() {
    std::cout << "Hello World!" << std::endl;
    
    Nodo n1(1);
    Nodo n2(2);
    Nodo n3(3);
    Nodo n4(4);
    
    Lista Mi_lista;
    Mi_lista.insert_nodo(&n1);
    Mi_lista.mostrarLista();
    Mi_lista.insert_nodo(&n2);
    Mi_lista.mostrarLista();
    Mi_lista.insert_nodo(&n3);
    Mi_lista.mostrarLista();
    Mi_lista.insert_nodo(&n4);
    Mi_lista.mostrarLista();
    Mi_lista.delete_nodo();
    Mi_lista.mostrarLista();
    Mi_lista.delete_nodo();
    Mi_lista.mostrarLista();
    Mi_lista.delete_nodo();
    Mi_lista.mostrarLista();
    Mi_lista.delete_nodo();
    Mi_lista.mostrarLista();
    Mi_lista.delete_nodo();
    Mi_lista.mostrarLista();
    
    
}