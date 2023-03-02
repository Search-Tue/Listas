#include <iostream>
using namespace std;

int valorAbsoluto(int numero) {
   if (numero < 0) {
      return -numero;
   } else {
      return numero;
   }
}

int main() {
   int numero;

   cout << "Digite um numero inteiro: ";
   cin >> numero;

   int valorAbs = valorAbsoluto(numero);

   cout << "O valor absoluto de " << numero << " e " << valorAbs << endl;

   return 0;
}

