
#include "Paquete.h"
#include <cassert>

Paquete::Paquete() {
    this->id_ = "";
    this->parada_ = "";
    this->kilos_ = 0;
}

Paquete::Paquete(const std::string& id, const std::string& parada, int kilos) {
    assert(id != "");
    assert(parada != "");
    assert(kilos > 0);
    this->id_ = id;
    this->parada_ = parada;
    this->kilos_ = kilos;
}

std::string Paquete::id() const {
    return this->id_;
}

std::string Paquete::parada() const {
    return this->parada_;
}

int Paquete::kilos() const {
    return this->kilos_;
}