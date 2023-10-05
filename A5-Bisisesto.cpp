#include<stdio.h>

int main()
{
	int a;
	printf("Este programa te dice si un año es bisiesto o no. Escribe un año por favor\n");
	scanf("%d",&a);
	
	if (a%4==0&& !(a%100==0)||(a%400==0))
	{
		printf("%d Es un año bisiesto",a);	
	}
	else
	{
		printf("%d No es un año bisiesto",a);	
	}
	
	return 0;
}
