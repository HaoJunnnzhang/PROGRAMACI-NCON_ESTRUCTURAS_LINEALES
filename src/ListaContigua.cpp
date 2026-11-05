
#include "ListaContigua.h"
#include <cassert>
#include <utility>

ListaContigua::ListaContigua(){
    this->cap_=4;
    this->tam_=0;
    this->datos_=new std::string[this->cap_];
}

ListaContigua::~ListaContigua(){
    delete[] this->datos_;
}

ListaContigua::ListaContigua(const ListaContigua&){
    this->cap_=4;
    this->tam_=0;
    this->datos_=new std::string[this->cap_];
}

ListaContigua& ListaContigua::operator=(ListaContigua){
    return *this;
}

void ListaContigua::intercambio(ListaContigua&){
}

void ListaContigua::crecer(){
}

int ListaContigua::tam() const{
    return 0;
}

bool ListaContigua::vacia() const{
    return true;
}

std::string ListaContigua::at(int) const{
    return "";
}

void ListaContigua::insertar(int, const std::string&){
}

void ListaContigua::borrar(int){
}

int ListaContigua::posicion(const std::string&) const{
    return -1;
}