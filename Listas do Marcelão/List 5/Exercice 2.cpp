#include <iostream>
using namespace std;

int contaVogais(string str) {
   int cont = 0;
   int i = 0;
   while (str[i] != '\0') {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
          str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
         cont++;
      }
      i++;
   }
   return cont;
}

int main() {
   string str;

   cout << "Digite uma string: ";
   getline(cin, str);

   int numVogais = contaVogais(str);

   cout << "Numero de vogais na string: " << numVogais << endl;

   return 0;
}

