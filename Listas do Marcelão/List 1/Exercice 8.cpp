#include <iostream>

using namespace std;

int main()
{
    float idade, quantidade, total, real;
    printf("Digite sua idade: ");
    scanf("%f", &idade);
    printf("Digite a quantidade de cigarros consumidos por dia: ");
    getchar();
    scanf("%f", &quantidade);
    
    total = quantidade * idade * 365;
    real = (total * 10) /1440;
    
    printf("voce ja perdeu: %f", real);
    return 0;
}
    

