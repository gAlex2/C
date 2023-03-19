#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>

#define MAX 100

void textcolor(unsigned short color)
{
    HANDLE hconsole  = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hconsole == INVALID_HANDLE_VALUE) return;
    SetConsoleTextAttribute(hconsole,color);
}

main()
{
	int n,byte,n_dec;
	int cont,i,j;
	int vet[MAX];
	int temp;
	int qd;
	
	do
	{
		
		system("cls");
		
		printf("Byte: ");
		scanf("%d",&byte);
		
		for(i=0;i<byte*8;i++)
		{
			vet[i]=0;
		}
		
		cont=0;
		
		do
		{
			system("cls");
			
			textcolor(4);
			
			for(j=0;j<byte*8-cont;j++)
			{
				printf("0");
			}
			
			textcolor(7);
			
			for(i=0;i<cont;i++)
			{	
				printf("%d",vet[i]);
			}
			
			printf("\n\n");
			
			n=getch();
			
			switch(n)
			{
				case 48: vet[cont]=0; cont++; break;
				case 49: vet[cont]=1; cont++; break;
			}
			
			if(cont==byte*8)
			{
				break;
			}
			
		}while(n!=13);
		
		if(cont>byte*8)
		{
			cont--;
		}
		
		for(i=0;i<cont;i++)
		{
			for(j=0;j<byte*8-1;j++)
			{
				temp=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=temp;
			}
		}
		
		system("cls");
		
		for(i=0;i<byte*8;i++)
		{
			printf("%d",vet[i]);
		}
		
		n_dec=0;
		qd=1;
		
		for(i=byte*8-1;i>=0;i--)
		{	
			if(vet[i]==1)
			{
				n_dec=n_dec+qd;
			}
			
			qd=qd*2;
		}
		
		printf("\n\nNumero Decimale: %d\n\n",n_dec);
		
		system("pause");
		
	}while(1==1);
}
