#include<stdio.h>

int main()
{
	int a,v1,v2,v3;
	printf("Este programa intercambia tres valores que le des. ASi que damelos\nValor 1(v1):");
 	scanf("%d",&v1);
 	printf("\nValor 2(v2):");
 	scanf("%d",&v2);
 	printf("\nValor 3(v3):");
 	scanf("%d",&v3);
 	
 	a=v3;
 	v3=v2;
 	v2=v1;
 	v1=a;
 	
 	
 	printf("\nLos valores intercambiados son:\nValor 1(v1):%d    \nValor 2(v2):%d    \nValor 3(v3):%d",v1,v2,v3);
 	
 	return 0;
}
