//Pablo
#include "Paquete.h"
#include <cassert>
#include <iostream>

int main() {
    
    Paquete vacio;
    assert(vacio.id() == "");
    assert(vacio.parada() == "");
    assert(vacio.kilos() == 0);

    Paquete p("A1", "calle1", 5);
    assert(p.id() == "A1");
    assert(p.parada() == "calle1");
    assert(p.kilos() == 5);

    Paquete copia = p;
    copia = vacio;
    assert(p.id() == "A1");

    std::cout << "test_paquete: OK\n";
    return 0;
}