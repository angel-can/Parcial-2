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
		for(j=0;j<largo-i;j++)
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
		break;
		
	}
}

int insercion(int lista[10000],int largo)
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

int quicksort(int lista[], int primero, int ultimo) 
{
    int i,j,temp,pivot= lista[ultimo];
    i= primero-1;
    for (j= primero; j<=ultimo-1; j++) 
	{
        if (lista[j]<pivot) 
		{
            i++;
            temp= lista[i];
            lista[i]= lista[j];
            lista[j]= temp;
        }
    }
    temp= lista[i+1];
    lista[i+1]= lista[ultimo];
    lista[ultimo]= temp; 
}


	
//	OPERACIONES
float promedio(float lista[100],int largo)
{
	int i;
	float s=0;
	for(i=0;i<largo;i++)
	{
		s+=lista[i];
	}
	s=s/largo;
	return s;
}

int minimo(float lista[100],int largo)
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

int maximo(float lista[100],int largo)
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
	float b[100],in[100],q[100];
	int arreglo[10000];
//	Arreglo
	for(i=0;i<10000;i++)
	{
		arreglo[i]=rand()%10001+1;
	}

//	-----------------------------------------------------------	

//tiempo bubble
printf("\nEstadisticas Bubblesort");
	for(i=0;i<100;i++)
	{
		clock_t tic = clock();
		bubblesort(arreglo,10000);
 		clock_t toc = clock();
 	b[i]=(float)(toc - tic) / CLOCKS_PER_SEC;
	}
		
//promedio
	printf("\nPromedio %f milisegundos",promedio(b,100)*1000);	
//	minimo
	printf("\nMaximo %f milisegundos",b[minimo(b,100)]*1000);
//	maximo
	printf("\nMinimo %f milisegundos",b[maximo(b,100)]*1000);
	
//	-----------------------------------------------------------

//tiempo insercion
printf("\n\nEstadisticas Insertionsort");
	for(i=0;i<100;i++)
	{
		clock_t tic = clock();
		insercion(arreglo,10000);
 		clock_t toc = clock();
 	in[i]=(float)(toc - tic) /CLOCKS_PER_SEC;
	}

//promedio
	printf("\nPromedio %f milisegundos",promedio(in,100)*1000);	
//	minimo
	printf("\nMinimo %f milisegundos",in[minimo(in,100)]*1000);
//	maximo
	printf("\nMaximo %f milisegundos",in[maximo(in,100)]*1000);
	
//	-----------------------------------------------------------

//tiempo quick
	printf("\n\nEstadisticas quicksort");
	for(i=0;i<100;i++)
	{
		clock_t tic = clock();
		quicksort(arreglo,0,9999);
 		clock_t toc = clock();
 	q[i]=(float)(toc - tic) /CLOCKS_PER_SEC;
	}

//promedio
	printf("\nPromedio %f milisegundos",promedio(q,100)*1000);	
//	minimo
	printf("\nMinimo %f milisegundos",q[minimo(q,100)]*1000);
//	maximo
	printf("\nMaximo %f milisegundos",q[maximo(q,100)]*1000);
	
	return 0;
	
}
