#include <stdio.h>
#include <stdlib.h>
//Estructura repetitiva para las resistencias.
    void resi();
    int total(int r1,int r2,int r3,int r4,int r5);
    int main( ) 
    {
    	resi();
        return 0;
	}
	void resi()
	{
    int rt=0,r1=0,r2=0,r3=0,r4=0,r5=0;
    printf("Ingrese una resistencia ");
    scanf("%d",&r1);
    printf("Ingrese una resistencia ");    
    scanf("%d",&r2);
    printf("Ingrese una resistencia ");
    scanf("%d",&r3);
    printf("Ingrese una resistencia ");        
    scanf("%d",&r4);
    printf("Ingrese una resistencia ");    
    scanf("%d",&r5);
    rt=r1+r2+r3+r4+r5;
    printf(" \nLa resistencia total es  = %d ",rt );
    printf(" \nR1 = %d, R2= %d , R3= %d, R4= %d, R5= %d ",r1,r2,r3,r4,r5);
    }

