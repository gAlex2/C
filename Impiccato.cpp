#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>

#define MAX 100

void Stampa(char parola[], int len, int vet[])
{
	int i;
	
	for(i=0;i<len;i++)
	{
		if(i==0)
		{
			printf("%c ",parola[i]);
			continue;
		}
		
		if(i==len-1)
		{
			printf("%c ",parola[i]);
			continue;
		}
		
		if(vet[i]==1)
		{
			printf("%c ",parola[i]);
		}
		else
		{
			printf("_ ");
		}
	}
}

void Init_Vet(int vet[], int len)
{
	int i;
	
	for(i=0;i<len;i++)
	{
		vet[i]=0;
	}
}

main()
{
	int len,l;
	bool val=false;
	char x;
	int i;
	int vet[MAX];
	char parola[MAX];
	
	Init_Vet(vet,len);
	
	printf("Parola: ");
	scanf("%s",parola);
	
	len=strlen(parola);
	l=len-2;
	
	do
	{
		
		system("cls");
		
		Stampa(parola,len,vet);
		
		printf("\n\nLettera: ");
		scanf("%c",&x);
		
		for(i=0;i<len;i++)
		{
			if(x==parola[i])
			{
				vet[i]=1;
				l--;
			}
		}
		
		if(l==0)
		{
			val=true;
		}
		
	}while(!val);
	
	system("cls");
	
	printf("Hai Vinto");
}
