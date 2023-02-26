#include <iostream>

using namespace std;

int main() {
    int valor, i, divisores = 0, opcao;

        do{
            printf("Digite um valor: ");
            scanf("%d", &valor);
        }while(valor < 2);

        printf("Divisores de %d: ", valor);
        for(i = 2; i <= valor/2; i++){
            if(valor % i == 0){
                printf("%d ", i);
                divisores++;
            }
        }
}
