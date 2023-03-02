#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome_funcionario;
    float salario_antigo, salario_novo;
    cout << "Digite o nome do funcionário: ";
    getline(cin, nome_funcionario);
    cout << "Digite o salário atual do funcionário: ";
    cin >> salario_antigo;
    if (salario_antigo <= 1500.0) {
        salario_novo = salario_antigo * 1.1;
    } else {
        salario_novo = salario_antigo * 1.05;
    }
    float diferenca_salario = salario_novo - salario_antigo;
    cout << "O novo salário de " << nome_funcionario << " é R$ " << salario_novo << endl;
    cout << "A diferença entre o salário antigo e o novo é R$ " << diferenca_salario << endl;
    return 0;
}

