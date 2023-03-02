#include <iostream>
using namespace std;

int main() {
    int num, soma = 0;

    cout << "Digite um numero inteiro de tres digitos: ";
    cin >> num;

    if (num >= 100 && num <= 999) {
        soma = (num / 100) + ((num / 10) % 10) + (num % 10);
        cout << "A soma dos digitos do numero " << num << " e: " << soma << endl;
    }
    else {
        cout << "Numero invalido" << endl;
    }

    return 0;
}

