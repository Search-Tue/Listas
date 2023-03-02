#include <iostream>
using namespace std;

bool ehPalindromo(string palavra) {
    int tam = palavra.length();
    for (int i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;
    if (ehPalindromo(palavra)) {
        cout << palavra << " e um palindromo" << endl;
    } else {
        cout << palavra << " nao e um palindromo" << endl;
    }
    return 0;
}

