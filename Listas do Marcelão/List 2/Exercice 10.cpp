#include <iostream>

using namespace std;

int main(){
    int x, i, s;

    cout << "Informe o numero desejado: ";
    cin >> x;

    for(i=0 ; i<=100 ; i++)
        cout<<x<<" * "<<i<<" = " << x*i <<endl;

    return 0;
}
