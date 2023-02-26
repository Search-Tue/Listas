#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int eh_numero_de_armstrong (int n);

int
main () 
{
  
int x;
  
 
printf ("Digite um numero qualquer: ");
  
scanf ("%d", &x);
  
 
if (eh_numero_de_armstrong (x))
    
printf ("%d eh um numero de Armstrong.\n", x);
  
  else
    
printf ("%d nao eh um numero de Armstrong.\n", x);
  
 
return 0;

}


 
int
eh_numero_de_armstrong (int n) 
{
  
char str[100];
  
int soma_alg = 0;
  
 
sprintf (str, "%d", n);
  
for (int i = 0; i < strlen (str); i++)
    
soma_alg += pow (str[i] - '0', strlen (str));
  
 
if (n == soma_alg)
    
return 1;
  
  else
    
return 0;

}
