#include <iostream>
using namespace std;

int fatorial(int num) {
   int fat = 1;
   for (int i = num; i > 0; i--) {
      fat *= i;
   }
   return fat;
}

int main() {
   int num;

   cout << "Digite um numero inteiro: ";
   cin >> num;

   int fat = fatorial(num);

   cout << "Fatorial de " << num << " = " << fat << endl;

   return 0;
}

