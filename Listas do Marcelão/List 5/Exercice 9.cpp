#include <iostream>
using namespace std;

void imprimeLetras(string texto) {
   for (int i = 0; i < texto.length(); i++) {
      cout << texto[i] << endl;
   }
}

int main() {
   string texto;

   cout << "Digite um texto: ";
   getline(cin, texto);

   imprimeLetras(texto);

   return 0;
}

