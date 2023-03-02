#include <iostream>
using namespace std;

int main() {
   int num;

   do {
      cout << "Digite um numero inteiro entre 1 e 7: ";
      cin >> num;
   } while (num < 1 || num > 7);

   if (num >= 2 && num <= 6) {
      cout << "Dia util" << endl;
   } else {
      cout << "Final de semana" << endl;
   }

   return 0;
}

