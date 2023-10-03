#include<stdio.h>

int main()
{
	int x=1,y,n;	
	printf("este programa muestra media piramide de numeros. Checate. Primero dime hasta que numero quieres tu piramide");
	scanf("%d",&n);
	while(y<=n+1)
	{
		for(x=1;x<y;x++)
		{
			printf("%d ",x);	
		}
				
		printf("\n");
		y++;
	}
}
