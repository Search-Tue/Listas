#include <iostream>

using namespace std;

int ehPerfeito(int n){
    int i, soma = 0;

    for(i = 1; i <= n/2; i++){
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
        return 1;
    else
        return 0;
}

void imprimeDivisores(int n){
    int i;

    printf("%d = ", n);
    for(i = 1; i < n; i++){
        if(n % i == 0)
            printf("%d, ", i);
    }
    printf("\n");
}

int main() {
    int n, quantidade = 0, perfeito, i = 1;

    printf("numero: ");
    scanf("%d", &n);

    while(quantidade < n){
        perfeito = ehPerfeito(i);
        if(perfeito){
            quantidade++;
            printf("%d: ", quantidade);
            imprimeDivisores(i);
        }
        i++;
        if(i % 50000 == 0)
            printf("%d\n", i);
    }

    return 0;
}
