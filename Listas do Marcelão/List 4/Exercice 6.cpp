#include <iostream>
using namespace std;

int main() {
    int turno;

    cout << "Digite um numero inteiro entre 1 e 3: ";
    cin >> turno;

    switch (turno) {
        case 1:
            cout << "Manha" << endl;
            break;
        case 2:
            cout << "Tarde" << endl;
            break;
        case 3:
            cout << "Noite" << endl;
            break;
        default:
            cout << "O numero digitado nao corresponde a nenhum turno." << endl;
            break;
    }

    return 0;
}

