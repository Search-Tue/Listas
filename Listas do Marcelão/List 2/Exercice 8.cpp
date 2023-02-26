#include <iostream>

using namespace std;

void binario(int n){
    if(n!=1)
        binario(n/2);
    printf("%d", n%2);
}
int main(){
    int n;
    scanf("%d%*c", &n);
    binario(n);
}
