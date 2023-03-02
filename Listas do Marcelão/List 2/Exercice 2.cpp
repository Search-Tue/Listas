#include <iostream>
using namespace std;

int main() {
    int num, soma = 0;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    while (num > 0) {
        int digito = num % 10;
        soma += digito;
        num /= 10;
    }
    cout << "A soma dos digitos e: " << soma << endl;
    return 0;
}

