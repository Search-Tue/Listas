#include <iostream>
using namespace std;

void verificaParImpar(int num) {
   if (num % 2 == 0) {
      cout << num << " e par." << endl;
   } else {
      cout << num << " e impar." << endl;
   }
}

int main() {
   int num;

   cout << "Digite um numero inteiro: ";
   cin >> num;

   verificaParImpar(num);

   return 0;
}

