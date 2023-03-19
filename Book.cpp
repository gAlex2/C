#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

main()
{
	FILE *f;
	char x[100]="";
	int cont;
	int i;
	bool val=false;
	
	f=fopen("Libro.txt","a");
	
	if(f==NULL)
	{
		f=fopen("Libro.txt","w");
	}
	
	fclose(f);
	
	do
	{
		system("cls");
		
		printf("Libro.txt\n\n");
		
		f=fopen("Libro.txt","r");
		
		cont=0;
		
		while(!feof(f))
		{
			fscanf(f,"%s\n",x);
			printf("%d. %s\n",cont+1,x);
			
			cont++;
		}
		
		for(i=0;i<30-cont;i++)
		{
			printf("\n");
		}
		
		fclose(f);
	
		f=fopen("Libro.txt","a");
		
		printf("\n-------------------------------------------------------------");
		
		if(cont<30)
		{
			printf("\n\nFrase: ");
			scanf("%s",x);
			fprintf(f,"%s\n",x);
		}
		else
		{
			val=true;
		}
		
		fclose(f);
		
	}while(!val);
	
	printf("\n\nSPAZIO ESAURITO\n\n");
	
	system("start Libro.txt");
	
	system("pause");
}
