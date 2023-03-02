#include <iostream>

bool eh_primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void imprimir_primos_ate(int n) {
    std::cout << "Numeros primos entre 1 e " << n << ":" << std::endl;
    for (int i = 2; i <= n; i++) {
        if (eh_primo(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> n;
    imprimir_primos_ate(n);
    return 0;
}

