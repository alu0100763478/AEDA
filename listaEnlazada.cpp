#include "listaEnlazada.hpp"

Lista::Lista(void):
top(NULL){}

bool Lista::empty(void){
    return (top==NULL);
}

void Lista::insert_nodo(Nodo* nuevo){
    nuevo -> setSiguiente(top);
    top = nuevo;
    
}

Nodo* Lista::delete_nodo(void){

    Nodo* aux = top;
    top = top -> getSiguiente() ;
    aux -> setSiguiente(NULL);
    
    return aux;
}

Nodo* Lista::getTop(){
    
    return top;
}

void Lista::insert_after(Nodo* prev, Nodo* nuevo)
{
		nuevo->setSiguiente(prev->getSiguiente());
		prev->setSiguiente(nuevo);
}

Nodo* Lista::extract_after(Nodo* prev) {

		Nodo* aux = prev->getSiguiente();
		prev->setSiguiente(aux->getSiguiente());
		aux->setSiguiente(NULL);

		return aux;
	}

ostream& Lista::write(ostream& os){
	
		Nodo* aux = top;

		while (aux != NULL) {
		    aux->write(os);
		    std::cout << " ";
		    aux = aux->getSiguiente();
		}
	}