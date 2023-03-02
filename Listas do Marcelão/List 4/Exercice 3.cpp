#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if (num > 0) {
        cout << num << " e um numero positivo." << endl;
    } else if (num < 0) {
        cout << num << " e um numero negativo." << endl;
    } else {
        cout << "O numero e zero." << endl;
    }

    return 0;
}

