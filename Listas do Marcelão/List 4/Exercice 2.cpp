#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Digite um caractere: ";
    cin >> ch;

    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        cout << ch << " e uma vogal." << endl;
    } else {
        cout << ch << " e uma consoante." << endl;
    }

    return 0;
}

