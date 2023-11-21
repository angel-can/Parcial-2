#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//ALGORITMOS
int bubblesort(int lista[10000],int largo)
{
	int i,j,bandera,temp;
	for(i=1;i<largo;i++)
	{
		bandera=0;
		for(j+0;j<largo-i;j++)
		{
			if(lista[j]>lista[j+1])
			{
				bandera=1;
				temp=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temp;
			}
		}
		if(bandera==0)
		{
			break;
		}
	}
}

int  insercion(int lista[10000],int largo)
{
	int i,numeroActual,posAnterior;
	for (i=0;i < largo; i++) {
	numeroActual = lista[i]; 
	posAnterior = i-1;
	while (posAnterior >= 0 && lista[posAnterior] > numeroActual) 
	{
		lista[posAnterior + 1] = lista[posAnterior];
		posAnterior--;
	}
	lista[posAnterior+1] = numeroActual;
}
}

int quicksort(int lista[10000], int primero, int ultimo)
{
	int pivot, i, j, temp;
	if (primero < ultimo)
	{
		pivot = primero;
		i = primero;
		j = ultimo;
		while (i < j)
		{
			while (lista[i] <= lista[pivot] && i <= ultimo)
			{
			i++;
			}
		while (lista[j] > lista[pivot] && j >= primero)
		{
		j--;
		}
		if (i < j)
		{
			temp = lista[i];
			lista[i] = lista[j];
			lista[j] = temp;
		}
	}
	
	temp = lista[j];
	lista[j] = lista[pivot];
	lista[pivot] = temp;
	quicksort(lista, primero, j-1);
	quicksort(lista, j+1, ultimo);
	}
}
	
//	OPERACIONES
double promedio(double lista[100],int largo)
{
	int i;
	double s=0;
	for(i=0;i<largo;i++)
	{
		s+=lista[i];
	}
	s=s/largo;
	return s;
}

int minimo(double lista[100],int largo)
{
	int i,a, index;
	a = 1000000;
	index = -1;
	for(i =0;i<largo;i++)
	{
		if(lista[i]<a)
		{
			a=lista[i];
			index = i;
		}
	}
return index;
}

int maximo(double lista[100],int largo)
{
	int i,a, index;
	a = -100;
	index = -1;
	for(i =0;i<largo;i++)
	{
		if(lista[i]>a)
		{
			a=lista[i];
			index = i;
		}
	}
return index;
}

//MAIN
int main()
{
	srand(time(NULL));
	int i;
	double b[100],in[100],q[100];
	int arreglo[10000];
	
	for(i=0;i<10000;i++)
	{
		arreglo[i]=rand()%10001+1;
	}
	
//tiempo bubble
	for(i=0;i<100;i++)
	{
		clock_t tic = clock();
		bubblesort(arreglo,10000);
 		clock_t toc = clock();
 	b[i]=(double)(toc - tic) / CLOCKS_PER_SEC;
	}
	printf("\nEstadisticas Bubblesort");	
//promedio
	printf("\nPromedio %lf milisegundos",promedio(b,100)*1000);	
//	minimo
	printf("\nMinimo %lf milisegundos",b[minimo(b,100)]*1000);
//	maximo
	printf("\nMaximo %lf milisegundos",b[maximo(b,100)]*1000);
	
//tiempo insercion
	for(i=0;i<100;i++)
	{
		clock_t tic = clock();
		insercion(arreglo,10000);
 		clock_t toc = clock();
 	in[i]=(double)(toc - tic) / CLOCKS_PER_SEC;
	}
	printf("\n\nEstadisticas Insertionsort");
//promedio
	printf("\nPromedio %lf milisegundos",promedio(in,100)*1000);	
//	minimo
	printf("\nMinimo %lf milisegundos",in[minimo(in,100)]*1000);
//	maximo
	printf("\nMaximo %lf milisegundos",in[maximo(in,100)]*1000);
	
//tiempo quick
	for(i=0;i<100;i++)
	{
		clock_t tic = clock();
		quicksort(arreglo,0,9999);
 		clock_t toc = clock();
 	q[i]=(double)(toc - tic) / CLOCKS_PER_SEC;
	}

	printf("\n\nEstadisticas quicksort");
//promedio
	printf("\nPromedio %lf milisegundos",promedio(q,100)*1000);	
//	minimo
	printf("\nMinimo %lf milisegundos",q[minimo(q,100)]*1000);
//	maximo
	printf("\nMaximo %lf milisegundos",q[maximo(q,100)]*1000);
	
	return 0;
	
}
