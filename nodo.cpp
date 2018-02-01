Nodo::Nodo(TDATO dato):
TDATO(dato),
siguiente(NULL),
anterior(NULL)
{}

void Nodo::mostrarNodo(){
    std::cout << "Nodo: " << TDATO << ".Siguiente: "<< siguiente << ".Anterior:  " << anterior << std::endl;
}