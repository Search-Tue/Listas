#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;
    cout << "Digite um numero inteiro: ";
    cin >> n;
    cout << "Sequencia de Fibonacci ate o termo " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}

