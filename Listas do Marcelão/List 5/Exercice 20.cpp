#include <iostream>
#include <cmath>
using namespace std;

bool is_armstrong(int num) {
    int digits = 0, sum = 0, temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    for (int i = 0; i < digits; i++) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return (sum == num);
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    if (is_armstrong(num)) {
        cout << num << " e um numero de Armstrong" << endl;
    } else {
        cout << num << " nao e um numero de Armstrong" << endl;
    }
    return 0;
}

