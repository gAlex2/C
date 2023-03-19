#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>

#define MAX 100

void Scrittura(char frase[], int spazio1, int spazio2)
{
	int i;
	
	for(i=0;i<spazio1;i++)
	{
		printf("\n");
	}
	
	for(i=0;i<spazio2;i++)
	{
		printf(" ");
	}
	
	printf("%s",frase);
}

main()
{
	char frase[MAX];
	int spazio1,spazio2;
	
	do
	{
		
		system("cls");
		
		printf("Frase: ");
		scanf("%s",frase);
		
		system("cls");
		
		printf("Altezza: ");
		scanf("%d",&spazio1);
		
		system("cls");
		
		printf("Spazi: ");
		scanf("%d",&spazio2);
		
		system("cls");
		
		Scrittura(frase,spazio1,spazio2);
		
		printf("\n\n");
		
		system("pause");
		
	}while(1==1);
}
