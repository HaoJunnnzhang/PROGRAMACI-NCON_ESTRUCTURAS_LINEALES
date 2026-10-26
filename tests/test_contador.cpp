// Autor: (poned aquí vuestro nombre)
// Batería de EJEMPLO: la escribe quien NO implementó el módulo, leyendo solo la cabecera.
#include "contador.hpp"
#include <cassert>
#include <iostream>

static void recien_construido_vale_cero() {
    Contador c;
    assert(c.valor() == 0);
}

static void incrementar_y_decrementar() {
    Contador c;
    c.incrementar();
    c.incrementar();
    assert(c.valor() == 2);
    c.decrementar();
    assert(c.valor() == 1);
    c.decrementar();
    assert(c.valor() == 0);
    c.incrementar();  // crecer, decrecer y volver a crecer
    assert(c.valor() == 1);
}

static void la_copia_es_independiente() {
    Contador a;
    a.incrementar();
    Contador b = a;
    b.incrementar();
    assert(a.valor() == 1);
    assert(b.valor() == 2);
}

static void autoasignacion() {
    Contador a;
    a.incrementar();
    Contador& alias = a;
    a = alias;
    assert(a.valor() == 1);
}

int main() {
    recien_construido_vale_cero();
    incrementar_y_decrementar();
    la_copia_es_independiente();
    autoasignacion();
    std::cout << "test_contador: OK\n";
    return 0;
}
