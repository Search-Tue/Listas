#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;

    int fator = 2;
    while (num > 1) {
        if (num % fator == 0) {
            cout << fator << " ";
            num /= fator;
        } else {
            fator++;
        }
    }
    
    return 0;
}


