#include <iostream>

void identificaNumero(int numero) {
    switch (numero > 0 ? 1 : numero < 0 ? -1 : 0) {
        case 1:
            std::cout << "Positivo" << std::endl;
            break;
        case -1:
            std::cout << "Negativo" << std::endl;
            break;
        case 0:
            std::cout << "Zero" << std::endl;
            break;
    }
}

int main() {
    int numero;
    std::cout << "Digite um numero: ";
    std::cin >> numero;
    identificaNumero(numero);
    return 0;
}

