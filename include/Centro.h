//Haojunzhang y Pablo
#pragma once
#include <string>
#include "Paquete.h"
#include "Cola.h"
#include "Pila.h"
#include "Ruta.h"

class Centro
{
private:
    Cola cinta_;          // paquetes nuevos (FIFO)
    Cola reentregas_;     // paquetes fallados, para mañana (FIFO)
    Pila furgoneta_;      // lo último cargado sale primero (LIFO)
    Ruta* ruta_;          // ListaContigua o ListaEnlazada
    int capacidad_;
    int kilos_cargados_;
    int entregados_;
    int fallados_;

    // Centro no se copia: privadas y sin definir
    Centro(const Centro& original);
    Centro& operator=(const Centro& original);

public:
    // enlazada == true -> ListaEnlazada; false -> ListaContigua
    Centro(bool enlazada);
    ~Centro();

    // Pre: kilos > 0
    void furgoneta(int kilos);                                                // FURGONETA
    // Pre: kilos > 0
    void recibir(const std::string& id, const std::string& parada, int kilos); // RECIBIR
    void fijarRuta(const std::string* paradas, int n);                       // RUTA
    void insertar(const std::string& parada, int posicion);                  // INSERTAR
    void anular(const std::string& parada);                                  // ANULAR
    void posicion(const std::string& parada) const;                          // POSICION
    void cargar();                                                           // CARGAR
    void entregar();                                                         // ENTREGAR
    void fallo();                                                            // FALLO
    void estado() const;                                                     // ESTADO
    void cerrarDia();                                                        // CERRAR_DIA
    void nuevoDia();                                                         // NUEVO_DIA
};