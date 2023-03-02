#include <iostream>
using namespace std;

int string_length(string str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    string str;
    cout << "Digite uma string: ";
    getline(cin, str);
    int len = string_length(str);
    cout << "O comprimento da string e: " << len << endl;
    return 0;
}


