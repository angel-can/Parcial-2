#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int columna(int lista[3][3], int columna)
{
	int s=0,i;
	for(i=0;i<3;i++)
	{
		s+=lista[i][columna-1];
	}
	return s;
}

int fila(int lista[3][3], int fila)
{
	int s=0,i;
	for(i=0;i<3;i++)
	{
		s+=lista[fila-1][i];
	}
	return s;
}

int diagonal1(int lista[3][3], int largo)
{
	int i,d1=0;
	for(i=0;i<largo;i++)
	{
		d1+=lista[i][i];
	}
	return d1;
}

int diagonal2(int lista[3][3],int largo)
{
	int i,d2=0;
	for(i=0;i<largo;i++)
	{
		d2+=lista[i][largo-1-i];
	}
	return d2;
}


int main()
{
	
	int i,j,matriz[3][3];
	
	printf("Llena la matriz:\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Valor (%d,%d):  ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			
			
		}
	}
	printf("\n");
	printf("MATRIZ: \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	int f1,f2,f3,c1,c2,c3,d1,d2;

	f1=fila(matriz,1);
	f2=fila(matriz,2);
	f3=fila(matriz,3);
	c1=columna(matriz,1);
	c2=columna(matriz,2);
	c3=columna(matriz,3);
	d1=diagonal1(matriz,3);
	d2=diagonal2(matriz,3);
	
	if(f1==f2&&f1==f3&&f1==c1&&f1==c2&&f1==c3&&f1==d1&&f1==d2)
	{
		printf("Es magica");
	}
	else
	{
		printf("No es magica");
	}
	
			
	
	
}
