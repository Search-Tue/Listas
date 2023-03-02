#include <iostream>
using namespace std;

bool verificaPalindromo(string str) {
   int tamanho = str.length();
   int i = 0, j = tamanho - 1;
   
   while (i < j) {
      if (str[i] != str[j]) {
         return false;
      }
      i++;
      j--;
   }
   return true;
}

int main() {
   string palavra;

   cout << "Digite uma palavra: ";
   cin >> palavra;

   if (verificaPalindromo(palavra)) {
      cout << "A palavra " << palavra << " e um palindromo." << endl;
   } else {
      cout << "A palavra " << palavra << " nao e um palindromo." << endl;
   }

   return 0;
}

