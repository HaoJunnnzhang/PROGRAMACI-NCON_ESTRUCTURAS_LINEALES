//Pablo
#include "Pila.h"
#include <cassert>
#include <iostream>

int main(){
    Pila p;
    assert(p.vacia());
    assert(p.tam()==0);
    std::cout << "test_pila OK\n";
    return 0;
}