#include <iostream>
#include <cmath>
using namespace std;

bool ehNumeroDeArmstrong(int num) {
    int soma = 0;
    int temp = num;
    while (temp > 0) {
        int digito = temp % 10;
        soma += pow(digito, 3);
        temp /= 10;
    }
    return num == soma;
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    if (ehNumeroDeArmstrong(num)) {
        cout << num << " e um numero de Armstrong" << endl;
    } else {
        cout << num << " nao e um numero de Armstrong" << endl;
    }
    return 0;
}

