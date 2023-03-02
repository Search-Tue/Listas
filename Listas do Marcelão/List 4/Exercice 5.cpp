#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Digite um numero inteiro entre 1 e 5: ";
    cin >> nota;

    switch (nota) {
        case 1:
            cout << "Nota A" << endl;
            break;
        case 2:
            cout << "Nota B" << endl;
            break;
        case 3:
            cout << "Nota C" << endl;
            break;
        case 4:
            cout << "Nota D" << endl;
            break;
        case 5:
            cout << "Nota F" << endl;
            break;
        default:
            cout << "O numero digitado nao corresponde a nenhuma nota." << endl;
            break;
    }

    return 0;
}

