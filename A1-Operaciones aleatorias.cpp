#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int n,i,j,x;
	float y,r,s;
	printf("Este programa genera un numero aleatorio. Cada uno representa una operacion. \n1-Es una suma\n2-Es una resta\n3-Multplicacion\n4-Division\nEn caso de sacar un 5 el programa termina. Las operaciones se van a realizar hasta que de igual manera el resultado sea 5.\n");
	
	srand(time(NULL));
//	n=rand()%5+1;    //n
//	printf("EL numero es %d\n",n);
	n=4;
	switch(n)
	{
	case 1:
		while(x!=5)             //n
		{
			i=rand()%100;			//i   j
			j=rand()%100;
			x=i+j;
			printf("%d+%d=%d\n",i,j,x);
		}
		break;
		
	case 2:
		while(x!=5)             //n
		{
			i=rand()%100;			//i   j
			j=rand()%100;
			x=i-j;
			printf("%d-%d=%d\n",i,j,x);
		}
		break;
		
	case 3:
		while(x!=5)             //n
		{
			i=rand()%100;			//i   j
			j=rand()%100;
			x=i*j;
			printf("%d*%d=%d\n",i,j,x);
		}
		break;
		
	case 4:
		while(y!=5)             //n
		{
			r=rand()%100;			//i   j
			s=rand()%100;
			y=r/s;
			printf("%.0f/%.0f=%.3f\n",r,s,y);
		}
		break;
		
	case 5:
		printf("Me niego a hacer algo, es un 5, asi que...\n ");	
		break;
	}
	
	printf("Ya acabe :)");
	return 0;
}

