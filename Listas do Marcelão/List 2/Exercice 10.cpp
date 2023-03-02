#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    cout << "Multiplos de " << n << " menores que 100:" << endl;
    for (int i = 1; n * i < 100; i++) {
        cout << n * i << endl;
    }
    return 0;
}

