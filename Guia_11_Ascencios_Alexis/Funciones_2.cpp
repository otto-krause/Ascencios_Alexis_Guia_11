#include <stdio.h>
#include <stdlib.h>
    void areayperimetro();
    int total(int a, int b, int are, int perim);
    int main( ) 
		{
            areayperimetro();
            return 0;
        }
        void    areayperimetro()
        	{
            int a=0,b=0,perim=0,are=0;
            printf(" Ingrese un numero ");
            scanf("%d",&a);
            printf(" Ingrese otro numero ");        
            scanf("%d",&b);
            are=a*b;
			printf("\n El area de los dos numeros es : %d ",are);
			perim=(2*a)+(2*b);
			printf("\n El perimetro de los dos numeros es : %d",perim);
        }
