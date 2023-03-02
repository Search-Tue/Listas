#include <iostream>
using namespace std;

void converteTemperatura(float celsius, char opcao) {
   float fahrenheit, kelvin;

   if (opcao == 'F' || opcao == 'f') {
      fahrenheit = celsius * 1.8 + 32;
      cout << "A temperatura em Fahrenheit e " << fahrenheit << " F." << endl;
   }
   else if (opcao == 'K' || opcao == 'k') {
      kelvin = celsius + 273.15;
      cout << "A temperatura em Kelvin e " << kelvin << " K." << endl;
   }
   else {
      cout << "Opcao invalida." << endl;
   }
}

int main() {
   float temperatura;
   char opcao;

   cout << "Digite a temperatura em graus Celsius: ";
   cin >> temperatura;

   cout << "Digite a opcao de conversao (F para Fahrenheit, K para Kelvin): ";
   cin >> opcao;

   converteTemperatura(temperatura, opcao);

   return 0;
}

