#pragma once
#include <string>
#include "Ruta.h"

class NodoRuta
{
private:
    std::string parada;
    NodoRuta* siguente;
public:
    NodoRuta(const std::string& p, NodoRuta* sig);
    std::string getParada();
    NodoRuta* getSiguiente();
    void setSiguiente(NodoRuta* sig);
};

class ListaEnlazada : public Ruta
{
private:
    NodoRuta* primero_;
    int tam_;
public:
    ListaEnlazada();
    ~ListaEnlazada();
    ListaEnlazada(const ListaEnlazada& original);
    ListaEnlazada& operator=(ListaEnlazada original);
    void intercambio(ListaEnlazada& l);

    int tam() const;
    bool vacia() const;
    // Pre: 0 <= i < tam()
    std::string at(int i) const;
    // Pre: 0 <= i <= tam()
    void insertar(int i, const std::string& parada);
    // Pre: 0 <= i < tam()
    void borrar(int i);
    // Devuelve -1 si no está
    int posicion(const std::string& parada) const;
};