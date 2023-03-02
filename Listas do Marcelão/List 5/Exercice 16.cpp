#include <iostream>

void imprimirReverso(int numero) {
    int reverso = 0;
    while(numero != 0) {
        reverso = reverso * 10 + numero % 10;
        numero /= 10;
    }
    std::cout << "O reverso do numero e " << reverso << std::endl;
}

int main() {
    int numero;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;
    imprimirReverso(numero);
    return 0;
}

