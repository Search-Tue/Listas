#include <iostream>

using namespace std;

int main(void)
{
  float nota1, nota2, nota3, media;
  
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  
  printf("Digite a terceira nota do aluno: ");
  scanf("%f",&nota3);
  
  media = (nota1 + nota2 + nota3) / 3;
  
  if(media>=7){
  	
        printf("Aprovado\n");
    }
    else if (media<5){
    	printf("Reprovado\n");
	}
	else if(media>=5 || media<=6.9){
        printf("Recuperacao\n");
    }

  system("pause");
  return 0; 
}
