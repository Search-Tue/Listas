#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    cout << "Tabuada do " << n << ":" << endl;
    for (int i = 1; ; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}

