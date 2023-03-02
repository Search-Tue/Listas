#include <iostream>

using namespace std;

int main() {
    int num, num_copy, digitos = 0, soma = 0;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    num_copy = num;
    while (num_copy > 0) {
        digitos++;
        num_copy /= 10;
    }
    num_copy = num;
    while (num_copy > 0) {
        int digito = num_copy % 10;
        int digito_cubo = 1;
        for (int i = 0; i < digitos; i++) {
            digito_cubo *= digito;
        }
        soma += digito_cubo;
        num_copy /= 10;
    }
    if (soma == num) {
        cout << num << " e um numero de Armstrong." << endl;
    } else {
        cout << num << " nao e um numero de Armstrong." << endl;
    }
    return 0;
}

