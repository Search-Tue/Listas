#include <iostream>

using namespace std;

int main()
{
    float salarioAnterior,
        percentualDeAumento,
        diferencaEntreSalarios,
        salarioAtual;

    printf("Digite seu salario atual: ");
    scanf("%f", &salarioAnterior);

    if (salarioAnterior <= 1500)
        percentualDeAumento = 10;
    else
        percentualDeAumento = 5;
    diferencaEntreSalarios = salarioAnterior * (percentualDeAumento / 100.0);
    salarioAtual = salarioAnterior + diferencaEntreSalarios;
    printf("\nSeu salario antes do reajuste era de R$%.2f", salarioAnterior);
    printf("\nSeu salario foi aumentado em %.1f%%", percentualDeAumento);
    printf("\nSeu salario foi aumentado em R$%.2f", diferencaEntreSalarios);
    printf("\nSeu salario atual e de R$%.2f", salarioAtual);
    return 0;
}
