#include <iostream>#include <iostream>

using namespace std;

int main(){
    int x, i, s;

    cout << "Informe o numero desejado: ";
    cin >> x;
    
    cout << "informe o numero de multiplicacoes: ";
    cin >> s;

    for(i=0 ; i<=s ; i++)
        cout<<x<<" * "<<i<<" = " << x*i <<endl;

    return 0;
}
