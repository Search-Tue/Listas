#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Digite tres numeros inteiros: ";
    cin >> a >> b >> c;

    if (a <= b && b <= c) {
        cout << "Ordem crescente: " << a << " " << b << " " << c << endl;
    } else if (a <= c && c <= b) {
        cout << "Ordem crescente: " << a << " " << c << " " << b << endl;
    } else if (b <= a && a <= c) {
        cout << "Ordem crescente: " << b << " " << a << " " << c << endl;
    } else if (b <= c && c <= a) {
        cout << "Ordem crescente: " << b << " " << c << " " << a << endl;
    } else if (c <= a && a <= b) {
        cout << "Ordem crescente: " << c << " " << a << " " << b << endl;
    } else {
        cout << "Ordem crescente: " << c << " " << b << " " << a << endl;
    }

    return 0;
}



