#include <iostream>

using namespace std;

int main(){
    int Idade=0;
    
    printf("Digite idade:");
    scanf("%d",&Idade);

    if(Idade<18){
        printf("voce e menor de idade\n");
    }
	else if(Idade>65){
        printf("voce e idoso\n");
    }
    else if(Idade>=18 || Idade<=65){
        printf("voce e adulto\n");
    }

    system("pause");
    return 0;
}
