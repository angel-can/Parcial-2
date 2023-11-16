#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int triSup(int lista[5][7], int filas, int columnas)
{
	int s=0,i,j;
	for(i=0;i<filas;i++)
	{
		for(j=(0+i);j<columnas;j++)
		{
			s+=lista[i][j];
		}
	}
	return s;
}

int triInf(int lista[5][7], int filas, int columnas)
{
	int s=0,i,j;
	for(i=0;i<filas;i++)
	{
		for(j=0;j<(i+1);j++)
		{
			s+=lista[i][j];
		}
	}
	return s;
}

int main()
{
	int i,j,dp=0,s=0,matriz[5][7],f=5,c=7;
	srand(time(NULL));
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<7;j++)
		{
			matriz[i][j]=rand()%10;
			printf("%d    ",matriz[i][j]);
		}
		printf("\n");
	}
	
	// diagonal principal
	printf("\n");
	for(i=0;i<5;i++)
	{
		dp+=matriz[i][i];
	}
	printf("La diagonal principal: %d\n",dp);
	
	//la primera fila
	for(i=0;i<7;i++)
	{
		s+=matriz[0][i]	;
	}
	printf("la primera fila: %d \n",s);
	
	s=0;
	//la ultima columna
	for(i=0;i<5;i++)
	{
		s+=matriz[i][6]	;
	}
	printf("la ultima columna: %d \n",s);
	
//filas pares
	s=0;
	for(i=0;i<7;i++)
	{
		s+=matriz[2][i]	;
	}
	printf("la fila 2: %d \n",s);
	
	s=0;
	for(i=0;i<7;i++)
	{
		s+=matriz[4][i]	;
	}
	printf("la fila 4: %d \n",s);
	printf("\n");
//columnas impares
	s=0;
	for(i=0;i<5;i++)
	{
		s+=matriz[i][1]	;
	}
	printf("la columna 1: %d \n",s);
	
	s=0;
	for(i=0;i<5;i++)
	{
		s+=matriz[i][3]	;
	}
	printf("la columna 3: %d \n",s);
	
	s=0;
	for(i=0;i<5;i++)
	{
		s+=matriz[i][5]	;
	}
	printf("la columna 5: %d \n",s);
	printf("\n");
//	Triangulo Superior
	printf("Diagonal principal: %d\n",dp);
	printf("Triangulo Superior: %d\n",triSup(matriz,5,7));
	
	printf("\n");	
//	Triandulo inferior
	printf("Diagonal principal: %d\n",dp);
	printf("Triangulo Inferior: %d\n",triInf(matriz,5,7));
	
	
	

		
		
}


