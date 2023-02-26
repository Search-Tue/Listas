#include <iostream>

using namespace std;

int main()
{
    int Num1,Num2,Num3,x=0;

    printf("Primeiro numero:");
    scanf("%d",&Num1);

    printf("Segundo numero:");
    scanf("%d",&Num2);

    printf("Terceiro numero:");
    scanf("%d",&Num3);

    if(Num1 > Num2){
        x=Num1;
        Num1=Num2;
        Num2=x;
    }
    if(Num2 <= Num3){
        printf("A ordem crescente e: %d %d %d\n",Num1,Num2,Num3);
    }
    else
    {
        if(Num1 <= Num3){
            printf("A ordem crescente e: %d %d %d\n",Num1,Num3,Num2);
        }
        else
        {
            printf("A ordem crescente e: %d %d %d\n",Num3,Num1,Num2);
        }
    }
    system("pause");
    return 0;
}
