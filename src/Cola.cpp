#include "Cola.h"
#include<assert.h>


NodoCola::NodoCola(const Paquete&d, NodoCola* sig){
    this->dato=d;
    this->siguente=sig;
}
Paquete NodoCola::getPaquete(){
    return this->dato;
}
NodoCola* NodoCola::getSiguiente(){
    return this->siguente;
}
void NodoCola::setSiguiente(NodoCola*sigu){
    this->siguente=sigu;
}

Cola::Cola(){
    this->primero_=nullptr;
    this->ultimo_=nullptr;
    this->tam_=0;
}
Cola::Cola(const Cola& original){
    this->primero_=nullptr;
    this->ultimo_=nullptr;
    this->tam_=0;
    NodoCola* original_nodo=original.primero_;
    NodoCola*nuevo_ndoo=nullptr;
    for(int i=0;i<original.tam_;i++){
        NodoCola*nuevo= new NodoCola(original_nodo->getPaquete(),nullptr);
        if(this->primero_==nullptr){
            this->primero_=nuevo;
            nuevo_ndoo=nuevo;
        }else{
            nuevo_ndoo->setSiguiente(nuevo);
        }
        this->tam_++;
        original_nodo=original_nodo->getSiguiente();
        nuevo_ndoo=nuevo;
    }
    this->ultimo_=nuevo_ndoo;
}
void Cola::encolar(const Paquete& p){
    NodoCola* nuevo= new NodoCola(p,nullptr);
    if(this->primero_==nullptr){
        this->primero_=nuevo;
    }else{
        this->ultimo_->setSiguiente(nuevo);
    }
    this->ultimo_=nuevo;
    this->tam_++;
}
Cola::~Cola(){
    for (int i = 0; i < this->tam_; i++)
    {
       NodoCola* borrar=this->primero_;
       this->primero_=this->primero_->getSiguiente();
       delete borrar;
    }
}
Cola& Cola::operator=(Cola originl){
    this->intercambio(originl);
    return *this;
}
void Cola::intercambio(Cola &c){
    std::swap(this->primero_,c.primero_);
    std::swap(this->ultimo_,c.ultimo_);
    std::swap(this->tam_, c.tam_);
}
bool Cola::vacia() const {
    return tam_ == 0;
}

int Cola::tam() const {
    return tam_;
}