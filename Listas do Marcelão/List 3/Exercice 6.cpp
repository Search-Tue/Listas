#include <iostream>
using namespace std;

bool ehNumeroPerfeito(int num) {
    int somaDivisores = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }
    return num == somaDivisores;
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    if (ehNumeroPerfeito(num)) {
        cout << num << " e um numero perfeito" << endl;
    } else {
        cout << num << " nao e um numero perfeito" << endl;
    }
    return 0;
}

