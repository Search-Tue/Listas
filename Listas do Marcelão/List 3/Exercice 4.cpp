#include <iostream>
using namespace std;

int fatorial(int num) {
    int resultado = 1;
    for (int i = 2; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    cout << num << "! = " << fatorial(num) << endl;
    return 0;
}

