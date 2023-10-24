#include<stdio.h>


unsigned long long int fibonacci(unsigned long long int pos)
{
		if(pos<=1)
		{
		return pos;
		}	
		else 	
		{
		return(fibonacci(pos-1)+fibonacci(pos-2));
		}
	
}

int main()
{	
	
	int x, n,resultado=0;
	printf("               SERIE DE FIBONACCI\n\n");
	printf("Este programa te da los numeros de la serie de Fibonacci");
	printf("Dame hasta que posicion de la serie de Fibonacci quieres \nimprimir: ");
	scanf("%d",&n);
	
	printf("\n--------------------------------");
	printf("\nLos primeros %d numeros de la sucesion son:\n",n);
	
	for(x=0;x<n;x++)
	{
		printf("Valor %d: %llu \n",x,fibonacci(x));
	}
	
	return 0;
}
