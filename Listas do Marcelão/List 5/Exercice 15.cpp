#include <iostream>

void imprimirDivisores(int numero) {
    std::cout << "Divisores de " << numero << ": ";
    for(int i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int numero;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;
    imprimirDivisores(numero);
    return 0;
}

