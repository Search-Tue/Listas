#include <iostream>
using namespace std;

void imprimeTabuada(int num) {
   for (int i = 1; i <= 10; i++) {
      cout << num << " x " << i << " = " << num * i << endl;
   }
}

int main() {
   int numero;

   cout << "Digite um numero inteiro: ";
   cin >> numero;

   imprimeTabuada(numero);

   return 0;
}

