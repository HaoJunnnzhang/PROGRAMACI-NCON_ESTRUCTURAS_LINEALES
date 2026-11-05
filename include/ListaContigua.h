//Haojunzhang
#pragma once
#include <string>
#include "Ruta.h"

// Ruta guardada en un bloque contiguo de memoria que crece.
// Cuando se llena, se pide un bloque del doble y se copian las paradas.
class ListaContigua : public Ruta
{
private:
    std::string* datos_;   // el bloque de paradas
    int tam_;              // cuántas paradas hay
    int cap_;              // cuántas caben antes de crecer
    void crecer();         // duplica la capacidad
public:
    ListaContigua();
    ~ListaContigua();
    ListaContigua(const ListaContigua& original);
    ListaContigua& operator=(ListaContigua original);
    void intercambio(ListaContigua& l);

    int tam() const;
    bool vacia() const;
    // Pre: 0 <= i < tam()
    std::string at(int i) const;
    // Pre: 0 <= i <= tam()
    void insertar(int i, const std::string& parada);
    // Pre: 0 <= i < tam()
    void borrar(int i);
    // Posición de la parada, o -1 si no está
    int posicion(const std::string& parada) const;
};