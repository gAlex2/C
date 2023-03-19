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
	int i,cont,cont2;
	int x;
	char vet[MAX];
	bool val,val2;
	
	cont=0;
	cont2=0;
	val=false;
	val2=false;
	
	do
	{
		
		system("cls");
		
		printf("Email: ");
		
		for(i=0;i<cont;i++)
		{
			printf("%c",vet[i]);
		}
		
		if(val)
		{
			cont2++;
		
			textcolor(2);
			
			switch(cont2)
			{
				case 1: printf("gmail.com"); break;
				case 2: printf("mail.com"); break;
				case 3: printf("ail.com"); break;
				case 4: printf("il.com"); break;
				case 5: printf("l.com"); break;
				case 6: printf(".com"); break;
				case 7: printf("com"); break;
				case 8: printf("om"); break;
				case 9: printf("m"); break;
			}
			
			textcolor(7);
		}
		
		printf("\n\n--> ");
		
		x=getch();
		
		switch(x)
		{
			case 97: vet[cont]='a'; cont++; break;
				
			case 98: vet[cont]='b'; cont++; break;
				
			case 99: vet[cont]='c'; cont++; break;
				
			case 100: vet[cont]='d'; cont++; break;
			
			case 101: vet[cont]='e'; cont++; break;
			
			case 102: vet[cont]='f'; cont++; break;
			
			case 103: vet[cont]='g'; cont++; break;
			
			case 104: vet[cont]='h'; cont++; break;
			
			case 105: vet[cont]='i'; cont++; break;
			
			case 106: vet[cont]='j'; cont++; break;
			
			case 107: vet[cont]='k'; cont++; break;
			
			case 108: vet[cont]='l'; cont++; break;
			
			case 109: vet[cont]='m'; cont++; break;
			
			case 110: vet[cont]='n'; cont++; break;
			
			case 111: vet[cont]='o'; cont++; break;
			
			case 112: vet[cont]='p'; cont++; break;
			
			case 113: vet[cont]='q'; cont++; break;
			
			case 114: vet[cont]='r'; cont++; break;
			
			case 115: vet[cont]='s'; cont++; break;
			
			case 116: vet[cont]='t'; cont++; break;
			
			case 117: vet[cont]='u'; cont++; break;
			
			case 118: vet[cont]='v'; cont++; break;
			
			case 119: vet[cont]='w'; cont++; break;
			
			case 120: vet[cont]='x'; cont++; break;
			
			case 121: vet[cont]='y'; cont++; break;
				
			case 122: vet[cont]='z'; cont++; break;
			
			case 48: vet[cont]='0'; cont++; break;
			
			case 49: vet[cont]='1'; cont++; break;
			
			case 50: vet[cont]='2'; cont++; break;
			
			case 51: vet[cont]='3'; cont++; break;
			
			case 52: vet[cont]='4'; cont++; break;
			
			case 53: vet[cont]='5'; cont++; break;
			
			case 54: vet[cont]='6'; cont++; break;
			
			case 55: vet[cont]='7'; cont++; break;
			
			case 56: vet[cont]='8'; cont++; break;
				
			case 57: vet[cont]='9'; cont++; break;
			
			case 64: vet[cont]='@'; cont++; val=true; val2=true; break;
			
			case 46: vet[cont]='.'; cont++; break;
			
			case 8: cont--; break;
		}
		
		if(val2)
		{
			switch(x)
			{
				case 13:
					
					vet[cont]='g';
					cont++;
					
					vet[cont]='m';
					cont++;
					
					vet[cont]='a';
					cont++;
					
					vet[cont]='i';
					cont++;
					
					vet[cont]='l';
					cont++;
					
					vet[cont]='.';
					cont++;
					
					vet[cont]='c';
					cont++;
					
					vet[cont]='o';
					cont++;
					
					vet[cont]='m';
					cont++;
					
					val=false;
					
					break;
			}
		}
		
	}while(1==1);
}
