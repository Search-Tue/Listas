#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    cout << "O numero " << n << " em binario e: ";
    for (int i = 31; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
    return 0;
}

