#include <iostream>
using namespace std;

int main() {
    int num, i, cont=0;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    for (i=1; i<=num; i++) {
        if (num%i==0) {
            cont++;
        }
    }

    if (cont==2) {
        cout << "O numero " << num << " e primo." << endl;
    }
    else {
        cout << "O numero " << num << " nao e primo." << endl;
    }

    return 0;
}

