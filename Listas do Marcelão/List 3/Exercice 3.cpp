#include <iostream>
using namespace std;

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    if (ehPrimo(num)) {
        cout << num << " e primo" << endl;
    } else {
        cout << num << " nao e primo" << endl;
    }
    return 0;
}

