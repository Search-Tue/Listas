#include <iostream>
using namespace std;

bool is_perfect(int num) {
    int sum = 0, i = 1;
    while (i < num) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }
    return (sum == num);
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    if (is_perfect(num)) {
        cout << num << " e um numero perfeito" << endl;
    } else {
        cout << num << " nao e um numero perfeito" << endl;
    }
    return 0;
}

