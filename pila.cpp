#include "pila.hpp"

Pila::Pila(void):
head(NULL){}


void Pila::push(Nodo* nuevo){
    
    nuevo -> setSiguiente(head);
    head = nuevo;
    
}

void Pila::pop(void){
    assert(!empty());
    Nodo* aux = head;
    head = head -> getSiguiente() ;
    aux -> setSiguiente(NULL);
	delete aux;
}

bool Pila::empty(void){
    if(head == NULL)    return true;
    else    return false;    
}

Nodo* Pila::get_head(void){
    return head;
}

ostream& Pila::write(ostream& os){
			
    Nodo* aux = head;
    while(aux != NULL){
        cout << " │ " << setw(2)<< aux->getValor() << "  │" << endl;
		aux = aux->getSiguiente();
	}
    cout << " └─────┘" << endl; 
}