#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    float media;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite o terceiro numero: ";
    cin >> num3;

    media = (num1 + num2 + num3) / 3.0;

    cout << "A media dos numeros digitados e: " << media << endl;

    if (media >= 7) {
        cout << "Aprovado" << endl;
    }
    else if (media >= 5 && media < 7) {
        cout << "Recuperacao" << endl;
    }
    else {
        cout << "Reprovado" << endl;
    }

    return 0;
}

