#include <stdio.h>
#include <stdlib.h> 
   
void numero();
int total(int num1, int num2);    
    int main()
	{
		numero();
        return 0;	
	} 
	void numero()
	{
    int num1,num2;
    printf(" Ingrese un numero : ");
    scanf("%d",&num1);
    printf(" Ingrese otro numero : ");
    scanf("%d",&num2);    
        if (num1>num2) 
		{
            printf(" %d es mayor que %d ",num1,num2);
        }
		else 
		if(num2>num1)
		{
            printf(" %d es mayor que %d ",num2,num1);
        } 
		else
		{
            printf(" %d es igual que %d ",num1,num2);
        }
    }
