#include <iostream>
using namespace std;

int somaDigitos(int num) {
    int soma = 0;
    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    cout << "A soma dos digitos de " << num << " e " << somaDigitos(num) << endl;
    return 0;
}

