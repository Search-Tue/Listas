#include <iostream>

using namespace std;

int main() {
    int num1, num2, op;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "Escolha a operacao: " << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtracao" << endl;
    cout << "3 - Multiplicacao" << endl;
    cout << "4 - Divisao" << endl;
    cin >> op;

    switch(op) {
        case 1:
            cout << "Resultado da soma: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado da subtracao: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado da multiplicacao: " << num1 * num2 << endl;
            break;
        case 4:
            if(num2 == 0) {
                cout << "Nao e possível dividir por zero." << endl;
            } else {
                cout << "Resultado da divisao: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Operação invalida." << endl;
    }

    return 0;
}

