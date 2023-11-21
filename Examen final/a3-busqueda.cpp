#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int secuencial (int lista[50000],int largo,int buscar)
{
	int i,bandera=0;
	for(i=0;i <largo;i++)
	{
		if(lista[ i]==buscar)
		{
			return (i+1);
			bandera=1;
			break;
		}
	}
	if(bandera==0)
	{
		
	}
	return -1;
	
}

int binario(int lista[50000],int largo,int elemento)
{
	int primero,ultimo,mitad,bandera=0;
	primero = 0;
	ultimo = largo-1;
	mitad = (primero+ultimo)/2;
	while (primero <= ultimo) 
	{
		if (lista[mitad] < elemento)
		{
		primero = mitad + 1;
		}else if (lista[mitad] == elemento)
		{
		return mitad;
		bandera=1;
		break;
		}
		else
		{
		ultimo = mitad-1;
		}
		mitad = (primero+ultimo)/2;
	}
		if (bandera==0)
		{
		return -1;
		}
}

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

int main()
{
	
	srand(time(NULL));
	double tiempo=0,s[100],b[100];
	int arreglo[50000], bb,i;
//	arreglo
	for(i=0;i<50000;i++)
	{
		arreglo[i]=i;
	}
		
//	tiempo secuencial
	for(i=0;i<100;i++)
	{
	bb=rand()%50000;
	clock_t tic = clock();
	secuencial(arreglo,50000,bb);
 	clock_t toc = clock();
 	s[i]=(double)(toc - tic) / CLOCKS_PER_SEC;
	}
	printf("\nEstadisticas del secuencial:");	
//promedio
	printf("\nPromedio %lf milisegundos",promedio(s,100)*1000);	
//	minimo
	printf("\nMinimo %lf milisegundos",s[minimo(s,100)*1000]);
//	maximo
	printf("\nMaximo %lf milisegundos",s[maximo(s,100)]*1000);
	
//	tiempo binario
	for(i=0;i<100;i++)
	{
		bb=rand()%50000;
		clock_t tic = clock();
		binario(arreglo,50000,bb);
	 	clock_t toc = clock();
	 	b[i]=(double)(toc - tic) / CLOCKS_PER_SEC;
	 
	}
	printf("\n\nEstadisticas del binario:");	
	//promedio
	printf("\nPromedio %lf milisegundos",promedio(b,100)*1000);	
//	minimo
	printf("\nMinimo %lf milisegundos",b[minimo(b,100)]*1000);
//	maximo
	printf("\nMaximo %lf milisegundos" ,b[maximo(b,100)]*1000);
	
	return 0;
}
