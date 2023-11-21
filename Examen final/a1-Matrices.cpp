#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int multiplicacion(int arreglo1[30][30],int arreglo2[30][30])
{
	int s1=0,k=0,j,i;
	for(k=0;k<30;k++)
	{
		for(j=0;j<30;j++)
		{
			for(i=0;i<30;i++)
			{
				s1=s1+(arreglo1[k][i]*arreglo2[i][j]);
			}
			printf("%d ",s1);
			s1=0;
		}
		printf("\n");
	}
}

int main()
{
	srand(time(NULL));
	int i,j,matriz1[30][30],matriz2[30][30];
	
	printf("Matriz 1:\n");
	
	for(i=0;i<30;i++)
	{
		for(j=0;j<30;j++)
		{
		matriz1[i][j]=rand()%10;
		printf("%d ", matriz1[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz 2:\n");	
	for(i=0;i<30;i++)
	{
		for(j=0;j<30;j++)
		{
		matriz2[i][j]=rand()%10;
		printf("%d ", matriz1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	clock_t tic = clock();
	multiplicacion(matriz1,matriz2);
 	clock_t toc = clock();
 	printf("\nElapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
	
	
	return 0	;

}

