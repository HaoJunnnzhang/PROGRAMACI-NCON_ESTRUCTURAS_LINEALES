
#include "ListaEnlazada.h"
#include <cassert>
#include <utility>

NodoRuta::NodoRuta(const std::string& p, NodoRuta* sig){
    this->parada=p;
    this->siguente=sig;
}

std::string NodoRuta::getParada(){
    return this->parada;
}

NodoRuta* NodoRuta::getSiguiente(){
    return this->siguente;
}

void NodoRuta::setSiguiente(NodoRuta* sig){
    this->siguente=sig;
}

ListaEnlazada::ListaEnlazada(){
    this->primero_=nullptr;
    this->tam_=0;
}

ListaEnlazada::~ListaEnlazada(){
}

ListaEnlazada::ListaEnlazada(const ListaEnlazada&){
    this->primero_=nullptr;
    this->tam_=0;
}

ListaEnlazada& ListaEnlazada::operator=(ListaEnlazada){
    return *this;
}

void ListaEnlazada::intercambio(ListaEnlazada&){
}

int ListaEnlazada::tam() const{
    return 0;
}

bool ListaEnlazada::vacia() const{
    return true;
}

std::string ListaEnlazada::at(int) const{
    return "";
}

void ListaEnlazada::insertar(int, const std::string&){
}

void ListaEnlazada::borrar(int){
}

int ListaEnlazada::posicion(const std::string&) const{
    return -1;
}