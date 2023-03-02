#include <iostream>
using namespace std;

int main() {
    string nome;
    int idade;

    cout << "Digite o seu nome: ";
    getline(cin, nome);

    cout << "Digite a sua idade: ";
    cin >> idade;

    if (idade < 18) {
        cout << nome << ", voce e menor de idade." << endl;
    }
    else if (idade >= 18 && idade <= 65) {
        cout << nome << ", voce e adulto." << endl;
    }
    else {
        cout << nome << ", voce e idoso." << endl;
    }

    return 0;
}

