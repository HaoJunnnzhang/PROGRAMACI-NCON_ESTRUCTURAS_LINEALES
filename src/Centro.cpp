//Haojunzhang y Pablo
#include "Centro.h"
#include "ListaContigua.h"
#include "ListaEnlazada.h"
#include <iostream>
#include <cassert>

Centro::Centro(bool enlazada){
    if(enlazada){
        this->ruta_=new ListaEnlazada();
    }else{
        this->ruta_=new ListaContigua();
    }
    this->capacidad_=0;
    this->kilos_cargados_=0;
    this->entregados_=0;
    this->fallados_=0;
}

Centro::~Centro(){
    delete this->ruta_;
}

void Centro::furgoneta(int){
}

void Centro::recibir(const std::string&, const std::string&, int){
}

void Centro::fijarRuta(const std::string*, int){
}

void Centro::insertar(const std::string&, int){
}

void Centro::anular(const std::string&){
}

void Centro::posicion(const std::string&) const{
}

void Centro::cargar(){
}

void Centro::entregar(){
}

void Centro::fallo(){
}

void Centro::estado() const{
}

void Centro::cerrarDia(){
}

void Centro::nuevoDia(){
}