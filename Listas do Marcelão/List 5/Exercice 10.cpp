#include <iostream>
using namespace std;

void imprimeSinal(int num) {
   switch (num) {
      case 0:
         cout << "O número e zero." << endl;
         break;
      case 1 num > 0:
         cout << "O número e positivo." << endl;
         break;
      case 2 num < 0:
         cout << "O número e negativo." << endl;
         break;
   }
}

int main() {
   int numero;

   cout << "Digite um numero inteiro: ";
   cin >> numero;

   imprimeSinal(numero);

   return 0;
}

