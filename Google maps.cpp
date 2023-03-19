#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

main()
{
	char luogo[100];
	
	do
	{
		char comando[100]="start https://www.google.it/maps/place/";
		
		system("cls");
		
		printf("Luogo: ");
		scanf("%s",luogo);
		
		system(strcat(comando,luogo));
		
		printf("\n");
		
		system("pause");
		
		system("taskkill /IM Firefox.exe");
		
	}while(1==1);
}
