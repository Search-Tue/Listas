#include <iostream>
using namespace std;

int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b;
    cout << "Digite o primeiro número: ";
    cin >> a;
    cout << "Digite o segundo número: ";
    cin >> b;
    cout << "O maior número é: " << maior(a, b) << endl;
    return 0;
}

