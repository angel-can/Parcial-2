#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int x;
	printf("Este programa pregunta si los numeros del 1 al 100 es multiplo de 3\n");
	
	for(x=1;x<=100;x++)
	{
		printf("Es el %d multiplo de 3?\n",x);
		if(x%3==0)
		{
			printf("Si\n");
		}
		else
		{
			printf("No\n");	
		}
	}
	return 0;
}
