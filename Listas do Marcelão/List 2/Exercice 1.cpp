#include <iostream>

using namespace std;

int main(void) {
    
    int numero;
    
    printf(" Insira um numero: ");
    scanf("%d", &numero);
    
    printf("\n D(%d): ", numero);
    
    for (int i = 1; i <= numero; ++i) {

        if (numero % i == 0) {
            printf(" %d ", i);
        }
    } 
}

