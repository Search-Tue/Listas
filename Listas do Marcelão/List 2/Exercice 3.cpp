#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Digite um numero inteiro: ";
    cin >> n;

    cout << "Numeros primos menores ou iguais a " << n << ":\n";

    for (int i = 2; i <= n; i++) {
        bool primo = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            cout << i << endl;
        }
    }

    return 0;
}


