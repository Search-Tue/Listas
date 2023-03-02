#include <iostream>

using namespace std;

int main() {
    int idade, cigarros_por_dia;
    cout << "Informe a sua idade: ";
    cin >> idade;
    cout << "Informe a quantidade de cigarros que voce fuma por dia: ";
    cin >> cigarros_por_dia;

    int minutos_perdidos = cigarros_por_dia * 10 * 365 * (idade < 30 ? 1 : idade < 40 ? 2 : idade < 50 ? 3 : idade < 60 ? 4 : 5);
    int dias_perdidos = minutos_perdidos / (24 * 60);

    cout << "Voce perdeu aproximadamente " << dias_perdidos << " dias de vida" << endl;

    return 0;
}

