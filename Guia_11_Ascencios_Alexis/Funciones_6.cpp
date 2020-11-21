#include <stdio.h>
#include <stdlib.h>

void octava();
int total(int num, int res);
    int main() 
	{
		octava();
        return 0;
	}
	void octava()
	{
    float num=0,res=0;
    printf(" Ingrese un numero ");
    scanf("%f",&num);
    res=num/8;
    printf(" La octava parte de %f es %f ",num,res);
    }



