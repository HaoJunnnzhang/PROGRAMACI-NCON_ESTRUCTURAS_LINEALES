//Haojunzhang
#pragma once
#include <string>

// Ruta del día: secuencia ordenada de paradas.
// Es la interfaz común de ListaContigua y ListaEnlazada:
// el resto del programa solo usa Ruta y no sabe cuál de las dos hay debajo.
// Las posiciones empiezan en 0.
class Ruta
{
public:
    virtual ~Ruta();

    // Cuántas paradas hay
    virtual int tam() const = 0;
    virtual bool vacia() const = 0;

    // Parada que está en la posición i
    // Pre: 0 <= i < tam()
    virtual std::string at(int i) const = 0;

    // Mete parada en la posición i; las de detrás se corren una posición
    // Pre: 0 <= i <= tam()
    virtual void insertar(int i, const std::string& parada) = 0;

    // Quita la parada de la posición i
    // Pre: 0 <= i < tam()
    virtual void borrar(int i) = 0;

    // Posición de la parada, o -1 si no está en la ruta
    virtual int posicion(const std::string& parada) const = 0;
};