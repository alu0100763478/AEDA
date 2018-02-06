#include <iostream>
#include "listaEnlazada.hpp"
#include "pila.hpp"
#define N_CHARS 10
using namespace std;

int main() {
    std::cout << "Hello World!" << std::endl;

   
    Lista Mi_lista;
    
    
    for(int i = 0; i < N_CHARS; i++){
		Mi_lista.insert_nodo( new Nodo(i) );
    }
    
	Mi_lista.write(cout);
	cout << endl;
	
	std::cout << "Elimino los 3 últimos" << std::endl;
	for(int i = 0; i < 3; i++){
		Mi_lista.delete_nodo();
    }
    Mi_lista.write(cout);
	cout << endl;
	
	std::cout << "Inserto después de la cabeza de la lista" << std::endl;
    Mi_lista.insert_after(Mi_lista.getTop(), new Nodo(45));
    
    Mi_lista.write(cout);
	cout << endl;

    Pila pila1;
    
    for(int i = 0; i < N_CHARS; i++){
        pila1.push(new Nodo(i));
        pila1.write(cout);
    	cout << endl;
    }
    cout << endl;

	while(!pila1.empty()){
        pila1.pop();
        pila1.write(cout);
		cout << endl;
	}

}