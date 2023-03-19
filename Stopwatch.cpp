#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>

#define START_O 0
#define START_M 0
#define START_S 0

main()
{
	int o=START_O,m=START_M,s=START_S;
	
	do
	{
		
		system("cls");
		
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("											");
		
		if(o<10)
		{
			printf("0%d - ",o);
		}
		else
		{
			printf("%d - ",o);
		}
		
		if(m<10)
		{
			printf("0%d - ",m);
		}
		else
		{
			printf("%d - ",m);
		}
		
		if(s<10)
		{
			printf("0%d",s);
		}
		else
		{
			printf("%d",s);
		}
		
		Sleep(1000);
		
		if(s<59)
		{
			s++;
		}
		else
		{
			if(m<59)
			{
				m++;
				s=0;
			}
			else
			{
				if(o<23)
				{
					o++;
					m=0;
					s=0;
				}
				else
				{
					o=0;
					m=0;
					s=0;
				}
			}
		}
		
	}while(1==1);
}
