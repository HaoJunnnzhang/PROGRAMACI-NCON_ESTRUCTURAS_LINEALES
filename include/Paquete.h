//Haojunzhang
#pragma once
#include <string>

class Paquete
{
private:
    int kilos_;
    std::string id_;
    std::string parada_;
public:
    Paquete();
    // Pre: id no vacío, parada no vacía, kilos > 0
    Paquete(const std::string& id, const std::string& parada, int kilos);

    std::string id() const;
    std::string parada() const;
    int kilos() const;
};