#include<stdio.h>

int main()
{
	int a;
	printf("Este programa te dice si un a�o es bisiesto o no. Escribe un a�o por favor\n");
	scanf("%d",&a);
	if (a%4==0)
	{
		if(a%100==0)
		{
			if(a%400==0)
			{
				printf("%d Es un a�o bisiesto",a);	
			}
			else
			{
				printf("%d No es un a�o bisiesto",a);	
			}
		}
		else
		{
			printf("%d Es un a�o bisiesto",a);
		}
		
	}
	else
	{
		printf("%d No es a�o bisiesto",a);
	}
	
	return 0;
}
