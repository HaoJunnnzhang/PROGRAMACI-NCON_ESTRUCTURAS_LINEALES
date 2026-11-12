//Haojunzhang
#pragma once
#include "Paquete.h"

// Un nodo de la pila: un paquete y el puntero al anterior (el de debajo).
class NodoPila
{
private:
    Paquete dato;
    NodoPila* anterior;
public:
    NodoPila(const Paquete& d, NodoPila* ant);
    Paquete getPaquete();
    NodoPila* getAnterior();
    void setAnterior(NodoPila* ant);
};

// Pila de paquetes: el último que entra es el primero que sale (LIFO).
// Es la furgoneta: se carga y se descarga por la puerta de atrás.
class Pila
{
private:
    NodoPila* cima_;   // el último que se metió
    int tam_;
public:
    Pila();
    ~Pila();
    Pila(const Pila& original);
    Pila& operator=(Pila original);
    void intercambio(Pila& p);
    void apilar(const Paquete& p);
    void desapilar();
    Paquete cima() const;
    bool vacia() const;
    int tam() const;
};