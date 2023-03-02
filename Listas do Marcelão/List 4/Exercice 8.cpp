#include <iostream>
using namespace std;

int main() {
   double celsius, fahrenheit, kelvin;
   int opcao;

   cout << "Digite a temperatura em Celsius: ";
   cin >> celsius;

   cout << "Digite 1 para converter para Fahrenheit 2 para converter para Kelvin: ";
   cin >> opcao;

   switch (opcao) {
      case 1:
         fahrenheit = (celsius * 9/5) + 32;
         cout << "A temperatura em Fahrenheit e: " << fahrenheit << endl;
         break;
      case 2:
         kelvin = celsius + 273.15;
         cout << "A temperatura em Kelvin e: " << kelvin << endl;
         break;
      default:
         cout << "Opcao invalida!" << endl;
         break;
   }

   return 0;
}

