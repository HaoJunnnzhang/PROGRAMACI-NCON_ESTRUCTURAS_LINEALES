//Haojunzhang
#include "ListaEnlazada.h"
#include <cassert>
#include <iostream>

int main(){
    ListaEnlazada l;
    assert(l.vacia());
    assert(l.tam()==0);
    std::cout << "test_listaenlazada OK\n";
    return 0;
}