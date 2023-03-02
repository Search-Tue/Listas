#include <iostream>
using namespace std;

int main() {
   int num;

   do {
      cout << "Digite um número inteiro entre 1 e 10: ";
      cin >> num;
   } while (num < 1 || num > 10);

   cout << "Tabuada de " << num << ":" << endl;
   for (int i = 1; i <= 10; i++) {
      cout << num << " x " << i << " = " << num*i << endl;
   }

   return 0;
}

