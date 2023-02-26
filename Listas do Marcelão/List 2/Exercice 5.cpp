#include <iostream>

using namespace std;

int main() 
{
  int n, i, nf;    

  printf("Digite um numero inteiro: ");
  scanf("%d", &n);
  
  nf = 1;
  
  for (i = 2; i <= n; i++) 
    {
      nf = nf * i;
    }
  
  printf("O fatorial de %d= %d\n", n, nf);
  return 0;
}
