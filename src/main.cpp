// Autor: (poned aquí vuestro nombre)
// Lee las órdenes de la entrada estándar, una por línea.
// De momento solo reconoce FIN; el resto se irá implementando.
#include <iostream>
#include <string>

int main() {
    std::string linea;
    while (std::getline(std::cin, linea)) {
        if (linea == "FIN") {
            break;
        }
        std::cout << "Orden sin implementar: " << linea << '\n';
    }
    return 0;
}
