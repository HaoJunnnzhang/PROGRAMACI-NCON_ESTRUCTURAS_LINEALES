// Autor: (poned aquí vuestro nombre)
#include "contador.hpp"
#include <cassert>

Contador::Contador() : valor_(0) {}

void Contador::incrementar() { ++valor_; }

void Contador::decrementar() {
    assert(valor_ > 0 && "decrementar con el contador a cero");
    --valor_;
}

int Contador::valor() const { return valor_; }
