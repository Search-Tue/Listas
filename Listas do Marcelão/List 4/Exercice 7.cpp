#include <iostream>
using namespace std;

int main() {
    char caractere;

    cout << "Digite um caractere: ";
    cin >> caractere;

    if (caractere >= 'A' && caractere <= 'Z') {
        cout << "O caractere digitado eh uma letra maiuscula." << endl;
    } else if (caractere >= 'a' && caractere <= 'z') {
        cout << "O caractere digitado eh uma letra minuscula." << endl;
    } else if (caractere >= '0' && caractere <= '9') {
        cout << "O caractere digitado eh um numero." << endl;
    } else {
        cout << "O caractere digitado nao eh uma letra maiuscula, minuscula ou um numero." << endl;
    }

    return 0;
}

