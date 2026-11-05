#pragma once
#include "Paquete.h"

class NodoCola
{
private:
    Paquete dato;
    NodoCola* siguente;
public:
    NodoCola(const Paquete& d, NodoCola* sig);
    Paquete getPaquete();
    NodoCola* getSiguiente();
    void setSiguiente(NodoCola* sig); 
};
class Cola
{
private:
    NodoCola* primero_;   // por aquí se saca
    NodoCola* ultimo_;    // por aquí se mete
    int tam_;
public:
    Cola();
    ~Cola();
    Cola(const Cola& otra);                
    void encolar(const Paquete& p);
    void desencolar();
    Paquete frente() const;
    Cola& operator=(Cola c);
    void intercambio( Cola&c1);
};