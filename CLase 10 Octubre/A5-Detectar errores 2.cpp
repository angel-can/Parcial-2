#include<stdio.h>

float perimetro(float numero)
{
	float perimetro;
	perimetro =4*numero;
	return perimetro;
}

float area(float numero) 
{
	float area;
	area=numero*numero;
	return area;
}

int main()
{
	int num;
	printf("lado de un cuadrado: ");
	scanf("%d",&num);
	printf("Perimetro: %.3f\n",perimetro(num));
	printf("Area: %.3f\n",area(num));
	return 0;
}
