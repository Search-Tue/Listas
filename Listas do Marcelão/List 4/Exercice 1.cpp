#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um numero inteiro entre 1 e 7: ";
    cin >> num;

    switch(num) {
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda-feira" << endl;
            break;
        case 3:
            cout << "Ter�a-feira" << endl;
            break;
        case 4:
            cout << "Quarta-feira" << endl;
            break;
        case 5:
            cout << "Quinta-feira" << endl;
            break;
        case 6:
            cout << "Sexta-feira" << endl;
            break;
        case 7:
            cout << "S�bado" << endl;
            break;
        default:
            cout << "N�mero invalido. Digite um n�mero entre 1 e 7." << endl;
            break;
    }

    return 0;
}

