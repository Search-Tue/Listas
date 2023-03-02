#include <iostream>
using namespace std;

int calculaQuadrado(int num) {
   int quadrado;
   if (num >= 0) {
      quadrado = num * num;
      return quadrado;
   } else {
      cout << "Nao e possivel calcular o quadrado de um numero negativo." << endl;
      return -1;
   }
}

int main() {
   int num;

   cout << "Digite um numero inteiro: ";
   cin >> num;

   int quadrado = calculaQuadrado(num);

   if (quadrado != -1) {
      cout << "Quadrado de " << num << " = " << quadrado << endl;
   }

   return 0;
}

