#include <stdio.h>
#include <stdlib.h>
    void pre(float fuerza, float superficie);    
    int main() 
	{
    float superficie=0,fuerza=0;    
    printf(" Ingrese la fuerza ");
    scanf("%f",&fuerza);
    printf(" Ingrese la superficie ");
    scanf("%f",&superficie);
    pre (fuerza,superficie);
    }
    void pre(float fuerza, float superficie)
	{
    float pr=0;
    pr=fuerza/superficie;
    printf("La presion es = %f ",pr);
    }
