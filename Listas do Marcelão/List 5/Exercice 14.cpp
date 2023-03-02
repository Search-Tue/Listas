#include <iostream>
#include <string>
using namespace std;

bool contemApenasLetras(string str) {
   for (int i = 0; i < str.length(); i++) {
      if (!isalpha(str[i])) {
         return false;
      }
   }

   return true;
}

int main() {
   string str;

   cout << "Digite uma string: ";
   getline(cin, str);

   bool apenasLetras = contemApenasLetras(str);

   if (apenasLetras) {
      cout << "A string contem apenas letras" << endl;
   } else {
      cout << "A string contem caracteres que nao sao letras" << endl;
   }

   return 0;
}

