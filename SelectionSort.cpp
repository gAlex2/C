#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>

#define MAX 10

void textcolor(unsigned short color)
{
    HANDLE hconsole  = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hconsole == INVALID_HANDLE_VALUE) return;
    SetConsoleTextAttribute(hconsole,color);
}

void Stampa(int vett[], int i, int j)
{
	int q;
	
	for(q=0;q<8;q++)
	{
		if(i==q)
		{
			textcolor(6);
			printf("%d ",vett[q]);
			textcolor(7);
			printf("/ ");
		}
		else
		{
			if(j==q)
			{
				textcolor(9);
				printf("%d  ",vett[q]);
				textcolor(7);
			}
			else
			{
				if(q<i)
				{
					textcolor(2);
					printf("%d  ",vett[q]);
					textcolor(7);
				}
				else
				{
					printf("%d  ",vett[q]);
				}
			}
		}
	}
	
	printf("\n");
}

main()
{
	int vett[8];
	int i,j,q,k;
	int temp;
	int cont;
	bool val;
	
	srand(time(NULL));

	for(i=0;i<MAX;i++)
	{
		vett[i]=rand()%10+1;
	}
	
	cont=1;
	
	system("pause");
	
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<8;j++)
		{
			val=false;
			
			system("cls");
			
			printf("Passaggio %d\n\n",cont);
			
			Stampa(vett,i,j);
			
			if(vett[i]>vett[j])
			{
				for(q=0;q<4;q++)
				{
					system("cls");
					printf("Passaggio %d\n\n",cont);
					Stampa(vett,i,j);
					
					for(k=0;k<i;k++)
					{
						printf("   ");
					}
					
					textcolor(6);
					printf("%d",vett[i]);
					textcolor(7);
					
					for(k=0;k<j-i;k++)
					{
						printf("   ");
					}
					
					textcolor(9);
					printf("%d",vett[j]);
					textcolor(7);
					
					Sleep(200);
					
					system("cls");
					printf("Passaggio %d\n\n",cont);
					Stampa(vett,i,j);
					
					for(k=0;k<i;k++)
					{
						printf("   ");
					}
					
					textcolor(9);
					printf("%d",vett[j]);
					textcolor(7);
					
					for(k=0;k<j-i;k++)
					{
						printf("   ");
					}
					
					textcolor(6);
					printf("%d",vett[i]);
					textcolor(7);
					
					Sleep(200);
				}
				
				Sleep(400);
				
				if(vett[i]>vett[j])
				{
					temp = vett[i];
					vett[i] = vett[j];
					vett[j] = temp;
				}
			}
			else
			{
				Sleep(2000);
			}
			
			cont++;
		}
	}
	
	system("cls");
	
	printf("Vettore Ordinato:\n\n");
	
	textcolor(2);
	
	for(k=0;k<8;k++)
	{
		printf("%d  ",vett[k]);
	}
	
	textcolor(7);
	
	printf("\n\nNumero Passaggi: %d",cont);
}
