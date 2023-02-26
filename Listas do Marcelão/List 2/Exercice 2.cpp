#include <iostream>

using namespace std;

int main()
{
  int N, soma, digito;
       
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &N);

  soma = 0;
 
  while (N > 0){
    digito =  N % 10;
    soma = soma + digito;
    N = N / 10;
  } 
  printf("\n Soma dos digitos = %d\n", soma);
  return 0;
}
