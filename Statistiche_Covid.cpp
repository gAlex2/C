#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>

#define G 30
#define M 4

void textcolor(unsigned short color)
{
    HANDLE hconsole  = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hconsole == INVALID_HANDLE_VALUE) return;
    SetConsoleTextAttribute(hconsole,color);
}

struct s
{
	int positivi;
	int deceduti;
	int guariti;	
};

struct s covid[31][12];

int giorno,mese;

//////////////////////////////////////////////////////////

void Assegnazione(int giorno, int mese, int positivi, int deceduti, int guariti)
{
	covid[giorno][mese].positivi=positivi;
	covid[giorno][mese].deceduti=deceduti;
	covid[giorno][mese].guariti=guariti;
}

void Init()
{
	//24 FEBBRAIO
	Assegnazione(24,2,221,7,1);
	
	//25 FEBBRAIO
	Assegnazione(25,2,311,10,1);
	
	//26 FEBBRAIO
	Assegnazione(26,2,385,12,3);
	
	//27 FEBBRAIO
	Assegnazione(27,2,588,17,45);
	
	//28 FEBBRAIO
	Assegnazione(28,2,821,21,46);
	
	//29 FEBBRAIO
	Assegnazione(29,2,1049,29,50);
	
	//1 MARZO
	Assegnazione(1,3,1577,34,83);
	
	//2 MARZO
	Assegnazione(2,3,1835,52,149);
	
	//3 MARZO
	Assegnazione(3,3,2263,79,160);
	
	//4 MARZO
	Assegnazione(4,3,2706,107,276);
	
	//5 MARZO
	Assegnazione(5,3,3296,148,414);
	
	//6 MARZO
	Assegnazione(6,3,3916,197,523);
	
	//7 MARZO
	Assegnazione(7,3,5061,233,589);
	
	//8 MARZO
	Assegnazione(8,3,6387,366,622);
	
	//9 MARZO
	Assegnazione(9,3,7985,463,724);
	
	//10 MARZO
	Assegnazione(10,3,8514,631,1004);
	
	//11 MARZO
	Assegnazione(11,3,10590,827,1045);
	
	//12 MARZO
	Assegnazione(12,3,12839,1016,1258);
	
	//13 MARZO
	Assegnazione(13,3,14955,1266,1439);
	
	//14 MARZO
	Assegnazione(14,3,17750,1441,1966);
	
	//15 MARZO
	Assegnazione(15,3,20603,1809,2335);
	
	//16 MARZO
	Assegnazione(16,3,23073,2158,2749);
	
	//17 MARZO
	Assegnazione(17,3,26062,2503,2941);
	
	//18 MARZO
	Assegnazione(18,3,28710,2978,4025);
	
	//19 MARZO
	Assegnazione(19,3,33190,3405,4440);
	
	//20 MARZO
	Assegnazione(20,3,37860,4032,5129);
	
	//21 MARZO
	Assegnazione(21,3,42681,4825,6072);
	
	//22 MARZO
	Assegnazione(22,3,46638,5476,7024);
	
	//23 MARZO
	Assegnazione(23,3,50418,6077,7432);
	
	//24 MARZO
	Assegnazione(24,3,54030,6820,8326);
	
	//25 MARZO
	Assegnazione(25,3,57521,7503,9362);
	
	//26 MARZO
	Assegnazione(26,3,62013,8165,10361);
	
	//27 MARZO
	Assegnazione(27,3,66414,9134,10905);
	
	//28 MARZO
	Assegnazione(28,3,70065,10023,12384);
	
	//29 MARZO
	Assegnazione(29,3,73880,10779,13030);
	
	//30 MARZO
	Assegnazione(30,3,75528,11591,14620);
	
	//31 MARZO
	Assegnazione(31,3,77635,12428,15729);
	
	//1 APRILE
	Assegnazione(1,4,80572,13155,16847);
	
	//2 APRILE
	Assegnazione(2,4,83049,13915,18278);
	
	//3 APRILE
	Assegnazione(3,4,85388,14681,19758);
	
	//4 APRILE
	Assegnazione(4,4,88274,15362,20996);
	
	//5 APRILE
	Assegnazione(5,4,91246,15887,21815);
	
	//6 APRILE
	Assegnazione(6,4,93187,16523,22837);
	
	//7 APRILE
	Assegnazione(7,4,94067,17127,24392);
	
	//8 APRILE
	Assegnazione(8,4,95262,17669,26491);
	
	//9 APRILE
	Assegnazione(9,4,96877,18279,28470);
	
	//10 APRILE
	Assegnazione(10,4,98273,18849,30455);
	
	//11 APRILE
	Assegnazione(11,4,100269,19468,32534);
	
	//12 APRILE
	Assegnazione(12,4,102253,19899,34211);
	
	//13 APRILE
	Assegnazione(13,4,103616,20465,35435);
	
	//14 APRILE
	Assegnazione(14,4,104291,21067,37130);
	
	//15 APRILE
	Assegnazione(15,4,105418,21645,38092);
	
	//16 APRILE
	Assegnazione(16,4,106607,22170,40164);
	
	//17 APRILE
	Assegnazione(17,4,106962,22745,42727);
	
	//18 APRILE
	Assegnazione(18,4,107771,23227,44927);
	
	//19 APRILE
	Assegnazione(19,4,108257,23660,47055);
	
	//20 APRILE
	Assegnazione(20,4,108237,24114,48877);
	
	//21 APRILE
	Assegnazione(21,4,107709,24648,51600);
	
	//22 APRILE
	Assegnazione(22,4,107699,25085,54543);
	
	//23 APRILE
	Assegnazione(23,4,106848,25549,57576);
	
	//24 APRILE
	Assegnazione(24,4,106527,25969,60498);
	
	//25 APRILE
	Assegnazione(25,4,105847,26384,63120);
	
	//26 APRILE
	Assegnazione(26,4,106103,26644,64928);
	
	//27 APRILE
	Assegnazione(27,4,105813,26977,66624);
	
	//28 APRILE
	Assegnazione(28,4,105205,27359,68941);
	
	//29 APRILE
	Assegnazione(29,4,104657,27682,71252);
	
	//30 APRILE
	Assegnazione(30,4,101551,27967,75945);
}

//////////////////////////////////////////////////////////

void Giorni()
{
	int x;
	
	do
	{
		system("cls");
		
		if(giorno>9)
		{
			printf("%d/",giorno);
		}
		else
		{
			printf("0%d/",giorno);
		}
		
		if(mese>9)
		{
			printf("%d/2020\n\n",mese);
		}
		else
		{
			printf("0%d/2020\n\n",mese);
		}
		
		textcolor(6);
		printf("%d Casi Totali\n\n",covid[giorno][mese].positivi+covid[giorno][mese].deceduti+covid[giorno][mese].guariti);
		textcolor(7);
		
		switch(mese)
		{
			case 2:
				
				switch(giorno)
				{
					case 24:
						
						printf("Positivi: %d",covid[giorno][mese].positivi);
						printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
						printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
						
						break;
						
					default:
						
						if(covid[giorno][mese].positivi-covid[giorno-1][mese].positivi>=0)
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].positivi-covid[giorno-1][mese].positivi);
						}
						else
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].positivi-covid[giorno-1][mese].positivi);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti>=0)
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti);
						}
						else
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].guariti-covid[giorno-1][mese].guariti>=0)
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(2);
							printf(" (+%d)",covid[giorno][mese].guariti-covid[giorno-1][mese].guariti);
						}
						else
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(4);
							printf(" (%d)",covid[giorno][mese].guariti-covid[giorno-1][mese].guariti);
						}
						
						textcolor(7);
						
						break;
				}
				
				break;
				
			case 3:
				
				switch(giorno)
				{
					case 1:
						
						if(covid[giorno][mese].positivi-covid[29][mese-1].positivi>=0)
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].positivi-covid[29][mese-1].positivi);
						}
						else
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].positivi-covid[29][mese-1].positivi);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].deceduti-covid[29][mese-1].deceduti>=0)
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].deceduti-covid[29][mese-1].deceduti);
						}
						else
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].deceduti-covid[29][mese-1].deceduti);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].guariti-covid[29][mese-1].guariti>=0)
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(2);
							printf(" (+%d)",covid[giorno][mese].guariti-covid[29][mese-1].guariti);
						}
						else
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(4);
							printf(" (%d)",covid[giorno][mese].guariti-covid[29][mese-1].guariti);
						}
						
						textcolor(7);
						
						break;
						
					default:
						
						if(covid[giorno][mese].positivi-covid[giorno-1][mese].positivi>=0)
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].positivi-covid[giorno-1][mese].positivi);
						}
						else
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].positivi-covid[giorno-1][mese].positivi);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti>=0)
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti);
						}
						else
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].guariti-covid[giorno-1][mese].guariti>=0)
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(2);
							printf(" (+%d)",covid[giorno][mese].guariti-covid[giorno-1][mese].guariti);
						}
						else
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(4);
							printf(" (%d)",covid[giorno][mese].guariti-covid[giorno-1][mese].guariti);
						}
						
						textcolor(7);
						
						break;
				}
				
				break;
				
			case 4:
				
				switch(giorno)
				{
					case 1:
						
						if(covid[giorno][mese].positivi-covid[31][mese-1].positivi>=0)
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].positivi-covid[31][mese-1].positivi);
						}
						else
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].positivi-covid[31][mese-1].positivi);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].deceduti-covid[31][mese-1].deceduti>=0)
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].deceduti-covid[31][mese-1].deceduti);
						}
						else
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].deceduti-covid[31][mese-1].deceduti);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].guariti-covid[31][mese-1].guariti>=0)
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(2);
							printf(" (+%d)",covid[giorno][mese].guariti-covid[31][mese-1].guariti);
						}
						else
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(4);
							printf(" (%d)",covid[giorno][mese].guariti-covid[31][mese-1].guariti);
						}
						
						textcolor(7);
						
						break;
						
					default:
						
						if(covid[giorno][mese].positivi-covid[giorno-1][mese].positivi>=0)
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].positivi-covid[giorno-1][mese].positivi);
						}
						else
						{
							printf("Positivi: %d",covid[giorno][mese].positivi);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].positivi-covid[giorno-1][mese].positivi);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti>=0)
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(4);
							printf(" (+%d)",covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti);
						}
						else
						{
							printf("\n\nDeceduti: %d",covid[giorno][mese].deceduti);
							textcolor(2);
							printf(" (%d)",covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti);
						}
						
						textcolor(7);
						
						if(covid[giorno][mese].guariti-covid[giorno-1][mese].guariti>=0)
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(2);
							printf(" (+%d)",covid[giorno][mese].guariti-covid[giorno-1][mese].guariti);
						}
						else
						{
							printf("\n\nGuariti: %d",covid[giorno][mese].guariti);
							textcolor(4);
							printf(" (%d)",covid[giorno][mese].guariti-covid[giorno-1][mese].guariti);
						}
						
						textcolor(7);
						
						break;
				}
				
				break;
		}
		
		double mortalita=(double)(covid[giorno][mese].deceduti*100)/(covid[giorno][mese].deceduti+covid[giorno][mese].guariti+covid[giorno][mese].positivi);
		double guarigione=(double)(covid[giorno][mese].guariti*100)/(covid[giorno][mese].deceduti+covid[giorno][mese].guariti+covid[giorno][mese].positivi);
		
		textcolor(6);
		printf("\n\nMortalita': %4.2f",mortalita);
		printf("\nGuarigione: %4.2f",guarigione);
		textcolor(7);
		
		x=getch();
		
		switch(x)
		{
			case 72:
				
				switch(mese)
				{
					case 2:
						
						switch(giorno)
						{
							case 29:
								
								giorno=1;
								mese++;
								
								break;
								
							default:
								
								giorno++;
								
								break;
						}
						
						break;
						
					case 3:
						
						switch(giorno)
						{
							case 31:
								
								giorno=1;
								mese++;
								
								break;
								
							default:
								
								giorno++;
								
								break;
						}
						
						break;
						
					case 4:
						
						switch(giorno)
						{
							case 30:
								
								giorno=1;
								mese++;
								
								break;
								
							default:
								
								giorno++;
								
								break;
						}
						
						break;
					
					default:
						
						giorno++;
						
						break;
				}
				
				break;
				
			case 80:
				
				switch(mese)
				{
					case 2:
						
						switch(giorno)
						{
							case 24:
								
								
								
								break;
								
							default:
								
								giorno--;
								
								break;
						}
						
						break;
					
					case 3:
						
						switch(giorno)
						{
							case 1:
								
								giorno=29;
								mese--;
								
								break;
								
							default:
								
								giorno--;
								
								break;
						}
						
						break;
						
					case 4:
						
						switch(giorno)
						{
							case 1:
								
								giorno=31;
								mese--;
								
								break;
								
							default:
								
								giorno--;
								
								break;
						}
						
						break;
					
					default:
						
						giorno--;
						
						break;
						
				}
				
				break;
		}
		
	}while(x!=13);
}

//////////////////////////////////////////////////////////

void Stat_Positivi()
{
	int i,j;
	int x,y;
	
	system("cls");
	
	//FEBBRAIO
	for(i=25;i<=29;i++)
	{
		x=covid[i][2].positivi-covid[i-1][2].positivi;
		y=covid[i-1][2].positivi-covid[i-2][2].positivi;
		
		if(x>=0)
		{
			if(i>9)
			{
				printf("%d/02/2020	+%d",i,x);
			}
			else
			{
				printf("0%d/02/2020	+%d",i,x);
			}
		}
		else
		{
			if(i>9)
			{
				printf("%d/02/2020	%d",i,x);
			}
			else
			{
				printf("0%d/02/2020	%d",i,x);
			}
		}
		
		if(i!=25)
		{
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		else
		{
			printf("	");
		}
		
		printf("	");
		
		for(j=-1;j<x/100;j++)
		{
			printf("-");
		}
		
		printf("\n");
	}
	
	//MARZO
	for(i=1;i<=31;i++)
	{	
		if(i!=1 && i!=2)
		{
			x=covid[i][3].positivi-covid[i-1][3].positivi;
			y=covid[i-1][3].positivi-covid[i-2][3].positivi;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/03/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/03/2020	%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	%d",i,x);
				}
			}
		
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==1)
		{
			x=covid[i][3].positivi-covid[29][2].positivi;
			y=covid[29][2].positivi-covid[28][2].positivi;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/03/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/03/2020	%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==2)
		{
			x=covid[i][3].positivi-covid[i-1][3].positivi;
			y=covid[i-1][3].positivi-covid[29][2].positivi;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/03/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/03/2020	%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		printf("	");
		
		for(j=-1;j<x/100;j++)
		{
			printf("-");
		}
		
		printf("\n");
	}
	
	//APRILE
	for(i=1;i<=G;i++)
	{
		if(i!=1 && i!=2)
		{
			x=covid[i][4].positivi-covid[i-1][4].positivi;
			y=covid[i-1][4].positivi-covid[i-2][4].positivi;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/04/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/04/2020	%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	%d",i,x);
				}
			}
		
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==1)
		{
			x=covid[i][4].positivi-covid[31][3].positivi;
			y=covid[31][3].positivi-covid[30][3].positivi;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/04/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/04/2020	%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==2)
		{
			x=covid[i][4].positivi-covid[i-1][4].positivi;
			y=covid[i-1][4].positivi-covid[31][3].positivi;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/04/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/04/2020	%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		printf("	");
		
		if(x<0)
		{
			textcolor(1);
			
			for(j=x/100;j<=0;j++)
			{
				printf("-");
			}
			
			textcolor(7);
		}
		else
		{
			for(j=-1;j<x/100;j++)
			{
				printf("-");
			}
		}
		
		printf("\n");
	}
	
	printf("\n\n\nSTATISTICHE POSITIVI\n\n\n");
	
	system("pause");
}

void Stat_Deceduti()
{
	int i,j;
	int x,y;
	
	system("cls");
	
	//FEBBRAIO
	for(i=25;i<=29;i++)
	{
		x=covid[i][2].deceduti-covid[i-1][2].deceduti;
		y=covid[i-1][2].deceduti-covid[i-2][2].deceduti;
		
		if(x>=0)
		{
			if(i>9)
			{
				printf("%d/02/2020	+%d",i,x);
			}
			else
			{
				printf("0%d/02/2020	+%d",i,x);
			}
		}
		else
		{
			if(i>9)
			{
				printf("%d/02/2020	%d",i,x);
			}
			else
			{
				printf("0%d/02/2020	%d",i,x);
			}
		}
		
		if(i!=25)
		{
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		else
		{
			printf("	");
		}
		
		printf("	");
		
		for(j=-1;j<x/10;j++)
		{
			printf("-");
		}
		
		printf("\n");
	}
	
	//MARZO
	for(i=1;i<=31;i++)
	{	
		if(i!=1 && i!=2)
		{
			x=covid[i][3].deceduti-covid[i-1][3].deceduti;
			y=covid[i-1][3].deceduti-covid[i-2][3].deceduti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/03/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/03/2020	%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	%d",i,x);
				}
			}
		
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==1)
		{
			x=covid[i][3].deceduti-covid[29][2].deceduti;
			y=covid[29][2].deceduti-covid[28][2].deceduti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/03/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/03/2020	%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==2)
		{
			x=covid[i][3].deceduti-covid[i-1][3].deceduti;
			y=covid[i-1][3].deceduti-covid[29][2].deceduti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/03/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/03/2020	%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		printf("	");
		
		for(j=-1;j<x/10;j++)
		{
			printf("-");
		}
		
		printf("\n");
	}
	
	//APRILE
	for(i=1;i<=G;i++)
	{
		if(i!=1 && i!=2)
		{
			x=covid[i][4].deceduti-covid[i-1][4].deceduti;
			y=covid[i-1][4].deceduti-covid[i-2][4].deceduti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/04/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/04/2020	%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	%d",i,x);
				}
			}
		
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==1)
		{
			x=covid[i][4].deceduti-covid[31][3].deceduti;
			y=covid[31][3].deceduti-covid[30][3].deceduti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/04/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/04/2020	%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==2)
		{
			x=covid[i][4].deceduti-covid[i-1][4].deceduti;
			y=covid[i-1][4].deceduti-covid[31][3].deceduti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/04/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/04/2020	%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(4);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(2);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		printf("	");
		
		if(x<0)
		{
			textcolor(1);
			
			for(j=x/10;j<=0;j++)
			{
				printf("-");
			}
			
			textcolor(7);
		}
		else
		{
			for(j=-1;j<x/10;j++)
			{
				printf("-");
			}
		}
		
		printf("\n");
	}
	
	printf("\n\n\nSTATISTICHE DECEDUTI\n\n\n");
	
	system("pause");
}

void Stat_Guariti()
{
	int i,j;
	int x,y;
	
	system("cls");
	
	printf("STATISTICHE GUARITI\n\n");
	
	//FEBBRAIO
	for(i=25;i<=29;i++)
	{
		x=covid[i][2].guariti-covid[i-1][2].guariti;
		y=covid[i-1][2].guariti-covid[i-2][2].guariti;
		
		if(x>=0)
		{
			if(i>9)
			{
				printf("%d/02/2020	+%d",i,x);
			}
			else
			{
				printf("0%d/02/2020	+%d",i,x);
			}
		}
		else
		{
			if(i>9)
			{
				printf("%d/02/2020	%d",i,x);
			}
			else
			{
				printf("0%d/02/2020	%d",i,x);
			}
		}
		
		if(i!=25)
		{
			if(x-y>=0)
			{
				textcolor(2);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(4);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		else
		{
			printf("	");
		}
		
		printf("	");
		
		for(j=-1;j<x/50;j++)
		{
			printf("-");
		}
		
		printf("\n");
	}
	
	//MARZO
	for(i=1;i<=31;i++)
	{	
		if(i!=1 && i!=2)
		{
			x=covid[i][3].guariti-covid[i-1][3].guariti;
			y=covid[i-1][3].guariti-covid[i-2][3].guariti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/03/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/03/2020	%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	%d",i,x);
				}
			}
		
			if(x-y>=0)
			{
				textcolor(2);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(4);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==1)
		{
			x=covid[i][3].guariti-covid[29][2].guariti;
			y=covid[29][2].guariti-covid[28][2].guariti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/03/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/03/2020	%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(2);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(4);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==2)
		{
			x=covid[i][3].guariti-covid[i-1][3].guariti;
			y=covid[i-1][3].guariti-covid[29][2].guariti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/03/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/03/2020	%d",i,x);
				}
				else
				{
					printf("0%d/03/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(2);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(4);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		printf("	");
		
		for(j=-1;j<x/50;j++)
		{
			printf("-");
		}
		
		printf("\n");
	}
	
	//APRILE
	for(i=1;i<=G;i++)
	{
		if(i!=1 && i!=2)
		{
			x=covid[i][4].guariti-covid[i-1][4].guariti;
			y=covid[i-1][4].guariti-covid[i-2][4].guariti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/04/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/04/2020	%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	%d",i,x);
				}
			}
		
			if(x-y>=0)
			{
				textcolor(2);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(4);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==1)
		{
			x=covid[i][4].guariti-covid[31][3].guariti;
			y=covid[31][3].guariti-covid[30][3].guariti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/04/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/04/2020	%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(2);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(4);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		if(i==2)
		{
			x=covid[i][4].guariti-covid[i-1][4].guariti;
			y=covid[i-1][4].guariti-covid[31][3].guariti;
			
			if(x>=0)
			{
				if(i>9)
				{
					printf("%d/04/2020	+%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	+%d",i,x);
				}
			}
			else
			{
				if(i>9)
				{
					printf("%d/04/2020	%d",i,x);
				}
				else
				{
					printf("0%d/04/2020	%d",i,x);
				}
			}
			
			if(x-y>=0)
			{
				textcolor(2);
				printf("	+%d",x-y);
				textcolor(7);
			}
			else
			{
				textcolor(4);
				printf("	%d",x-y);
				textcolor(7);
			}
		}
		
		printf("	");
		
		for(j=-1;j<x/50;j++)
		{
			printf("-");
		}
		
		printf("\n");
	}
	
	printf("\n\n\nSTATISTICHE GUARITI\n\n\n");
	
	system("pause");
}

//////////////////////////////////////////////////////////

void Stampa_Grafico(int giorno, int mese, int opzione)
{
	int i;
	
	if(giorno>9)
	{
		if(mese>9)
		{
			printf("%d/%d/2020	",giorno,mese);
		}
		else
		{
			printf("%d/0%d/2020	",giorno,mese);
		}
	}
	else
	{
		if(mese>9)
		{
			printf("0%d/%d/2020	",giorno,mese);
		}
		else
		{
			printf("0%d/0%d/2020	",giorno,mese);
		}
	}
	
	switch(opzione)
	{
		case 1:
			
			if(covid[giorno][mese].positivi>=10000)
			{
				textcolor(2);
			}
			
			if(covid[giorno][mese].positivi>=50000)
			{
				textcolor(6);
			}
			
			if(covid[giorno][mese].positivi>=100000)
			{
				textcolor(4);
			}
			
			for(i=-1;i<covid[giorno][mese].positivi/1000;i++)
			{
				printf(".");
			}
			
			textcolor(7);
			
			break;
			
		case 2:
			
			if(covid[giorno][mese].deceduti>=5000)
			{
				textcolor(2);
			}
			
			if(covid[giorno][mese].deceduti>=15000)
			{
				textcolor(6);
			}
			
			if(covid[giorno][mese].deceduti>=30000)
			{
				textcolor(4);
			}
			
			for(i=-1;i<covid[giorno][mese].deceduti/500;i++)
			{
				printf(".");
			}
			
			textcolor(7);
			
			break;
			
		case 3:
			
			textcolor(2);
			
			for(i=-1;i<covid[giorno][mese].guariti/500;i++)
			{
				printf(".");
			}
			
			textcolor(7);
			
			break;
	}
	
	printf("\n");
}

void Grafico_Positivi()
{
	int i;
	
	system("cls");
	
	//FEBBRAIO
	for(i=24;i<=29;i++)
	{
		Stampa_Grafico(i,2,1);
	}
	
	//MARZO
	for(i=1;i<=31;i++)
	{
		Stampa_Grafico(i,3,1);
	}
	
	//APRILE
	for(i=1;i<=G;i++)
	{
		Stampa_Grafico(i,4,1);
	}
	
	printf("\n		|						  |						    |");
	printf("\n		0						50000					  	 100000");
	
	printf("\n\n\nGRAFICO POSITIVI\n\n\n");
	
	system("pause");
}

void Grafico_Deceduti()
{
	int i;
	
	system("cls");
	
	//FEBBRAIO
	for(i=24;i<=29;i++)
	{
		Stampa_Grafico(i,2,2);
	}
	
	//MARZO
	for(i=1;i<=31;i++)
	{
		Stampa_Grafico(i,3,2);
	}
	
	//APRILE
	for(i=1;i<=G;i++)
	{
		Stampa_Grafico(i,4,2);
	}
	
	printf("\n		|			      |				    |");
	printf("\n		0			    15000			  30000");
	
	printf("\n\n\nGRAFICO DECEDUTI\n\n\n");
	
	system("pause");
}

void Grafico_Guariti()
{
	int i;
	
	system("cls");
	
	printf("GRAFICO GUARITI\n\n");
	
	//FEBBRAIO
	for(i=24;i<=29;i++)
	{
		Stampa_Grafico(i,2,3);
	}
	
	//MARZO
	for(i=1;i<=31;i++)
	{
		Stampa_Grafico(i,3,3);
	}
	
	//APRILE
	for(i=1;i<=G;i++)
	{
		Stampa_Grafico(i,4,3);
	}
	
	printf("\n		|						  |						    |");
	printf("\n		0						25000					  	  50000");
	
	printf("\n\n\nGRAFICO GUARITI\n\n\n");
	
	system("pause");
}

//////////////////////////////////////////////////////////

main()
{
	Init();
	
	char menu[100];
	
	do
	{
		giorno=G; mese=M;
		
		system("cls");
		
		if(covid[giorno][mese].positivi<covid[giorno-1][mese].positivi)
		{
			textcolor(2);
			printf("POSITIVI IN DECREMENTO");
			textcolor(7);
		}
		else
		{
			textcolor(4);
			printf("POSITIVI IN INCREMENTO");
			textcolor(7);
		}
		
		if(((covid[giorno][mese].positivi-covid[giorno-1][mese].positivi)<(covid[giorno-1][mese].positivi-covid[giorno-2][mese].positivi)))
		{
			textcolor(2);
			printf("	-\n");
			textcolor(7);
		}
		else
		{
			textcolor(4);
			printf("	+\n");
			textcolor(7);
		}
		
		if(covid[giorno][mese].deceduti<covid[giorno-1][mese].deceduti)
		{
			textcolor(2);
			printf("DECEDUTI IN DECREMENTO");
			textcolor(7);
		}
		else
		{
			textcolor(4);
			printf("DECEDUTI IN INCREMENTO");
			textcolor(7);
		}
		
		if(((covid[giorno][mese].deceduti-covid[giorno-1][mese].deceduti)<(covid[giorno-1][mese].deceduti-covid[giorno-2][mese].deceduti)))
		{
			textcolor(2);
			printf("	-\n");
			textcolor(7);
		}
		else
		{
			textcolor(4);
			printf("	+\n");
			textcolor(7);
		}
		
		if(covid[giorno][mese].guariti>covid[giorno-1][mese].guariti)
		{
			textcolor(2);
			printf("GUARITI IN INCREMENTO");
			textcolor(7);
		}
		else
		{
			textcolor(4);
			printf("GUARITI A 0");
			textcolor(7);
		}
		
		if(((covid[giorno][mese].guariti-covid[giorno-1][mese].guariti)<(covid[giorno-1][mese].guariti-covid[giorno-2][mese].guariti)))
		{
			textcolor(4);
			printf("	-\n");
			textcolor(7);
		}
		else
		{
			textcolor(2);
			printf("	+\n");
			textcolor(7);
		}
		
		printf("\n1)Seleziona Giorno\n2)Statistiche Positivi\n3)Grafico Positivi\n4)Statistiche Deceduti\n5)Grafico Deceduti\n6)Statistiche Guariti\n7)Grafico Guariti\n\nMenu: ");
		scanf("%s",menu);
		
		switch(atoi(menu))
		{
			case 1:
				
				Giorni();
				
				break;
				
			case 2:
				
				Stat_Positivi();
				
				break;
				
			case 3:
				
				Grafico_Positivi();
				
				break;
				
			case 4:
				
				Stat_Deceduti();
				
				break;
				
			case 5:
				
				Grafico_Deceduti();
				
				break;
				
			case 6:
				
				Stat_Guariti();
				
				break;
				
			case 7:
				
				Grafico_Guariti();
				
				break;
		}
		
	}while(menu!=0);
}
