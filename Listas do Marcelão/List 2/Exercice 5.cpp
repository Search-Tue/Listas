#include <iostream>
using namespace std;

int main() {
    int num, fat = 1;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    for (int i = 2; i <= num; i++) {
        fat *= i;
    }
    cout << num << "! = " << fat << endl;
    return 0;
}

