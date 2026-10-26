// Autor: (poned aquí vuestro nombre)
// Módulo de EJEMPLO, no tiene nada que ver con el proyecto.
// Sirve para ver cómo se escribe un contrato. Borradlo cuando tengáis los vuestros.
#ifndef CONTADOR_HPP
#define CONTADOR_HPP

// Qué representa: un contador de enteros no negativos.
// Invariante: valor() >= 0 siempre.
// Copia: copiable por valor; no posee memoria dinámica (no necesita regla de tres).
// Qué NO hace: no tiene límite superior ni avisa de desbordamiento.
class Contador {
public:
    // Promete: valor() == 0. Coste: O(1).
    Contador();

    // Promete: valor() aumenta en 1. Coste: O(1).
    void incrementar();

    // Pre: valor() > 0 (assert). Promete: valor() disminuye en 1. Coste: O(1).
    void decrementar();

    // Promete: devuelve el valor actual. Coste: O(1).
    int valor() const;

private:
    int valor_;
};

#endif
