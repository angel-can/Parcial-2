#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int minimo(int arreglo[],int largo)
{
	int k,index,grande;
	index=-1;
	grande=50;
	for(k=0;k<largo;k++)
	{
		if(grande>arreglo[k])
		{
		grande=arreglo[k];
		index=k;	
		}
	
	}
	return index;
	
}

int maximo(int arreglo[],int largo)
{
	int k,index,grande;
	index=-1;
	grande=-50;
	for(k=0;k<largo;k++)
	{
		if(grande<arreglo[k])
		{
		grande=arreglo[k];
		index=k;	
		}
	
	}
	return index;
	
}





int main()
{
	int j,n;
	srand(time(NULL));
	printf("Este programa imprime una lista con numeros del 1 al 30. Dime cuantos elementos quieres que tenga la list\n");
	scanf("%d",&n);
	int lista[n];
	printf("\nLista sin ordenar\n");
	
	for(j=0;j<n;j++)
	{
	lista[j]=rand()%30+1;
	printf("%d.   %d\n",j+1,lista[j]);
	}
	
	//ordenar
	int i, numeroActual,posAnterior;
	for (i=0;i < n; i++)
	{
		numeroActual = lista[i];
		posAnterior = i-1;
		while (posAnterior >= 0 && lista[posAnterior] >numeroActual)
			{
			lista[posAnterior + 1] = lista[posAnterior];
			posAnterior--;
			}
	 	lista[posAnterior+1] = numeroActual;
	}
	//acabo

	printf("\nLista ordenada\n");
	
	for(j=0;j<n;j++)
	{
	printf(" %d.   %d\n",j+1,lista[j]);
	}
	
	//Minimo
	printf("\nMinimo: %d\n",lista[minimo(lista,n)]);
	
	//Maximo
	printf("Maximo: %d\n",lista[maximo(lista,n)]);
	
	//Media
	int base;
	float s=0,media,n1;
	n1=n;
	for(j=0;j<n;j++)
	{
		base=lista[j];
		s+=base;
		
	}
	media=s/n;	
	printf("Media es:%.2f\n",media);
	
	//mediana
	int z,mediana,n2=n;
	if(n2%2==0)
	{
		z=n2/2;
		mediana=(lista[z-1]+lista[z])/2;
	}
	else
	{
		z=(n2-1)/2;
		mediana=lista[z];
	}
	printf("Mediana es:%d",mediana);
	
	// Moda
	int moda[n];
	for(j=0;j<n;j++)
	{
		switch(lista[j])
		{
		case 1:
			moda[0]++;
			break;
		case 2:
			moda[1]++;
			break;
		case 3:
			moda[2]++;
			break;
		case 4:
			moda[3]++;
			break;
		case 5:
			moda[4]++;
			break;
		case 6:
			moda[5]++;
			break;
		case 7:
			moda[6]++;
			break;
		case 8:
			moda[7]++;
			break;
		case 9:
			moda[8]++;
			break;
		case 10:
			moda[9]++;
			break;
		case 11:
			moda[10]++;
			break;
		case 12:
			moda[11]++;
			break;
		case 13:
			moda[12]++;
			break;
		case 14:
			moda[13]++;
			break;
		case 15:
			moda[14]++;
			break;
		case 16:
			moda[15]++;
			break;
		case 17:
			moda[16]++;
			break;
		case 18:
			moda[17]++;
			break;
		case 19:
			moda[18]++;
			break;
		case 20:
			moda[21]++;
			break;
		case 21:
			moda[20]++;
			break;
		case 22:
			moda[21]++;
			break;
		case 23:
			moda[22]++;
			break;
		case 24:
			moda[23]++;
			break;
		case 25:
			moda[24]++;
			break;
		case 26:
			moda[25]++;
			break;
		case 27:
			moda[26]++;
			break;
		case 28:
			moda[27]++;
			break;
		case 29:
			moda[28]++;
			break;
		case 30:
			moda[29]++;
			break;
		}
	
	}
		printf("\nLa moda es %d",lista[maximo(moda,n)+1]);
	
	return 0;
}
