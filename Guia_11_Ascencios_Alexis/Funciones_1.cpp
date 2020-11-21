#include <stdio.h>
#include <stdlib.h>

void numeros();
int total(int n1, int n2);
        int main( ) 
		{
            numeros();
            return 0;
        }
    void numeros()
    {
    int n1=0,n2=0;
    printf("\n Ingrese un numero: ");
    scanf("%d",&n1);
    printf("\n Ingrese un numero: ");
    scanf("%d",&n2);
    printf("\n El primer numero ingresado es :  %d \n El segundo numero ingresado es : %d",n1,n2);
    }
