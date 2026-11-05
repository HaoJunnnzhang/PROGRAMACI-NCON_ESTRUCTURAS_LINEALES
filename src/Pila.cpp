#include "Pila.h"
#include <cassert>
#include <utility>

// --- NodoPila ---

NodoPila::NodoPila(const Paquete& d, NodoPila* ant) {
    this->dato = d;
    this->anterior = ant;
}

Paquete NodoPila::getPaquete() {
    return this->dato;
}

NodoPila* NodoPila::getAnterior() {
    return this->anterior;
}

void NodoPila::setAnterior(NodoPila* ant) {
    this->anterior = ant;
}

// --- Pila ---

Pila::Pila() {
    this->cima_ = nullptr;
    this->tam_ = 0;
}

Pila::~Pila() {
    while (this->cima_ != nullptr) {
        NodoPila* borrar = this->cima_;
        this->cima_ = this->cima_->getAnterior();
        delete borrar;
    }
}

Pila::Pila(const Pila& original) {
    this->cima_ = nullptr;
    this->tam_ = 0;
    NodoPila* original_nodo = original.cima_;
    NodoPila* ultimo_nuevo = nullptr;

    while (original_nodo != nullptr) {
        NodoPila* nuevo = new NodoPila(original_nodo->getPaquete(), nullptr);
        if (this->cima_ == nullptr) {
            this->cima_ = nuevo;
        } else {
            ultimo_nuevo->setAnterior(nuevo);
        }
        ultimo_nuevo = nuevo;
        this->tam_++;
        original_nodo = original_nodo->getAnterior();
    }
}

Pila& Pila::operator=(Pila original) {
    this->intercambio(original);
    return *this;
}

void Pila::intercambio(Pila& p) {
    std::swap(this->cima_, p.cima_);
    std::swap(this->tam_, p.tam_);
}

void Pila::apilar(const Paquete& p) {
    NodoPila* nuevo = new NodoPila(p, this->cima_);
    this->cima_ = nuevo;
    this->tam_++;
}

void Pila::desapilar() {
    assert(!vacia());
    NodoPila* borrar = this->cima_;
    this->cima_ = this->cima_->getAnterior();
    delete borrar;
    this->tam_--;
}

Paquete Pila::cima() const {
    assert(!vacia());
    return this->cima_->getPaquete();
}

bool Pila::vacia() const {
    return tam_ == 0;
}

int Pila::tam() const {
    return tam_;
}