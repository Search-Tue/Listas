#include <iostream>
using namespace std;

bool verificaPrimo(int numero) {
   int i = 2;

   if (numero <= 1) {
      return false;
   }

   while (i <= numero / 2) {
      if (numero % i == 0) {
         return false;
      }
      i++;
   }
   return true;
}

int main() {
   int numero;

   cout << "Digite um numero inteiro: ";
   cin >> numero;

   if (verificaPrimo(numero)) {
      cout << "O numero " << numero << " e um numero primo." << endl;
   } else {
      cout << "O numero " << numero << " nao e um numero primo." << endl;
   }

   return 0;
}

