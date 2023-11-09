#include<stdio.h>


/*int  palabras(int nopal)
{
	int n=0;
	char caracter;
	int coma,count_col;
	FILE*file=fopen("emails.csv","r");
	if(file==NULL)
	{

	perror("Estas haciendo algo mal chavo");
	return 1;
	}
	
	while(feof(file)==0)
	{
		caracter=fgetc(file);
		if(caracter==',')
		{
		count_col++;
		}
		if(count_col==nopal+1)
		{
			printf("%c",caracter);
			n++;
		}
		if(count_col==nopal+2||caracter=='\n')
		{
			break;
		}
	}
	
	
}*/

int main()

{
	bool seguir_fila=false;
	char palabras[3000][20];
	char valores[3000][5];
	unsigned char caracter;
	int long i,j,k;
	int  lacoma=0, ii=0, count_fil=0,fil=919; //id 180919
	
	FILE*file=fopen("emails.csv","r");
	
	if(file==NULL)
	{

	perror("Estas haciendo algo mal chavo");
	return 1;
	}
	

	//guaradr palabras        //lacoma
	for(j=0;j<3000;j++)
	 {
	 	lacoma=0;
	 	ii=0;
	 	while(lacoma==0)
	 	{
	 		caracter=fgetc(file);
	 		
	 		if(caracter==',')
	 		{
	 			lacoma++;
	 		}
	 		if (caracter!=',')
	 		{
	 			palabras[j][ii]=caracter;
	 		}
	 		ii++;
	 	
	 	}
	 }
	 
	 //i_f=0;
	 //lacoma=0;
	 
	 // guartdar valores
	 /*while(feof(file)==0)
	 {
	 	caracter=fgetc(file);
		if(caracter=='\n')
	    {
			count_fil++;
		}
		if(count_fil== fil)
		{
			seguir_fila=true;
		}
		
		
		if(seguir_fila)
		{				
	 		for(k=0;k<51;k++)
			{	 
	 			for(j=0;j<3000;j++)
				{	
				lacoma=0;
				ii=0;
		 			while(lacoma==0)
		 			{	 	
		 		 	 	caracter=fgetc(file);
		 		 	 	if(caracter==',')
		 	  	 		{
		 					lacoma++;
		 		 	 	}
		 		 		if (caracter!=',')
		 	     		{
	 		     			valores[j][ii]=caracter;
		 		 		}
		 				ii++;
		 	
					}
				}
			}
		 	
		}
	 }*/
		 
		 //escribir
	fclose(file);
	
	FILE*archivo;
	archivo=fopen("180919.txt","w");
		if(file==NULL)
	{

	perror("Estas haciendo algo mal chavo");
	return 1;
	}
		 	for(i=1;i<3000;i++)	
			 {	fprintf(archivo,"%d    ",i);
			 		for(j=0;j<20;j++)
			 		{
			 			fprintf(archivo,"%c",palabras[i][j]);
			 		}
			 		/*for(k=1;k<3000;k++)
			 		{
			 			printf(" %c",valores[k][0]);	
			 		}*/
			 		fprintf(archivo,",     la suma va aqui");
			 		fprintf(archivo,"\n");
			 }	
			 
			 printf("Los datos se han guardado en el documento de texto -180919-");
			fclose(archivo);
	 
	 return 0;
}
