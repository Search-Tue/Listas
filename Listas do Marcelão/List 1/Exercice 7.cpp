#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome_funcionario;
    float salario_antigo, salario_novo;
    cout << "Digite o nome do funcion�rio: ";
    getline(cin, nome_funcionario);
    cout << "Digite o sal�rio atual do funcion�rio: ";
    cin >> salario_antigo;
    if (salario_antigo <= 1500.0) {
        salario_novo = salario_antigo * 1.1;
    } else {
        salario_novo = salario_antigo * 1.05;
    }
    float diferenca_salario = salario_novo - salario_antigo;
    cout << "O novo sal�rio de " << nome_funcionario << " � R$ " << salario_novo << endl;
    cout << "A diferen�a entre o sal�rio antigo e o novo � R$ " << diferenca_salario << endl;
    return 0;
}

