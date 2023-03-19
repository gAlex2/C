#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<Windows.h>

void textcolor(unsigned short color)
{
    HANDLE hconsole  = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hconsole == INVALID_HANDLE_VALUE) return;
    SetConsoleTextAttribute(hconsole,color);
}

void Stm_Rounds(int y)
{
	int i;
	
	for(i=0;i<y;i++)
	{
		if(y>0 and y<40)
		{
			textcolor(2);
			printf("=");
			textcolor(7);
		}
		
		if(y>40 and y<70)
		{
			textcolor(6);
			printf("=");
			textcolor(7);
		}
		
		if(y>70 and y<87)
		{
			textcolor(4);
			printf("=");
			textcolor(7);
		}
		
		if(y==87)
		{
			textcolor(12);
			printf("=");
			textcolor(7);
		}
	}
}

int Increase(int x, int y)
{
	int i;
	
	for(i=0;i<y;i++)
	{
		x++;
	}
	
	return(x);
}

int Decrease(int x, int y)
{
	int i;
	
	for(i=0;i<y;i++)
	{
		x--;
	}
	
	return(x);
}

void Print(int x, int gear, int speed_fake, int speed)
{
	int y;
	
	system("cls");
	
	printf("0000	1000	2000	3000	4000	5000	6000	7000	8000	9000	10000			");
	
	if(x=='w')
	{
		textcolor(2);
		printf("THROTTLE");
		textcolor(7);
	}
	
	if(x=='s')
	{
		textcolor(4);
		printf("BREAK");
		textcolor(7);
	}
	
	if(x=='i')
	{
		textcolor(6);
		printf("+");
		textcolor(7);
	}
	
	if(x=='k')
	{
		textcolor(6);
		printf("-");
		textcolor(7);
	}
	
	printf("\n\n");
	
	Sleep(10);
	
	switch(speed_fake)
	{
		case 0: break;
		case 1: y=1; Stm_Rounds(y); break;
		case 2: y=2; Stm_Rounds(y); break;
		case 3: y=3; Stm_Rounds(y); break;
		case 4: y=4; Stm_Rounds(y); break;
		case 5: y=5; Stm_Rounds(y); break;
		case 6: y=6; Stm_Rounds(y); break;
		case 7: y=7; Stm_Rounds(y); break;
		case 8: y=8; Stm_Rounds(y); break;
		case 9: y=9; Stm_Rounds(y); break;
		case 10: y=10; Stm_Rounds(y); break;
		case 11: y=11; Stm_Rounds(y); break;
		case 12: y=12; Stm_Rounds(y); break;
		case 13: y=13; Stm_Rounds(y); break;
		case 14: y=14; Stm_Rounds(y); break;
		case 15: y=15; Stm_Rounds(y); break;
		case 16: y=16; Stm_Rounds(y); break;
		case 17: y=17; Stm_Rounds(y); break;
		case 18: y=18; Stm_Rounds(y); break;
		case 19: y=19; Stm_Rounds(y); break;
		case 20: y=20; Stm_Rounds(y); break;
		case 21: y=21; Stm_Rounds(y); break;
		case 22: y=22; Stm_Rounds(y); break;
		case 23: y=23; Stm_Rounds(y); break;
		case 24: y=24; Stm_Rounds(y); break;
		case 25: y=25; Stm_Rounds(y); break;
		case 26: y=26; Stm_Rounds(y); break;
		case 27: y=27; Stm_Rounds(y); break;
		case 28: y=28; Stm_Rounds(y); break;
		case 29: y=29; Stm_Rounds(y); break;
		case 30: y=30; Stm_Rounds(y); break;
		case 31: y=31; Stm_Rounds(y); break;
		case 32: y=32; Stm_Rounds(y); break;
		case 33: y=33; Stm_Rounds(y); break;
		case 34: y=34; Stm_Rounds(y); break;
		case 35: y=35; Stm_Rounds(y); break;
		case 36: y=36; Stm_Rounds(y); break;
		case 37: y=37; Stm_Rounds(y); break;
		case 38: y=38; Stm_Rounds(y); break;
		case 39: y=39; Stm_Rounds(y); break;
		case 40: y=40; Stm_Rounds(y); break;
		case 41: y=41; Stm_Rounds(y); break;
		case 42: y=42; Stm_Rounds(y); break;
		case 43: y=43; Stm_Rounds(y); break;
		case 44: y=44; Stm_Rounds(y); break;
		case 45: y=45; Stm_Rounds(y); break;
		case 46: y=46; Stm_Rounds(y); break;
		case 47: y=47; Stm_Rounds(y); break;
		case 48: y=48; Stm_Rounds(y); break;
		case 49: y=49; Stm_Rounds(y); break;
		case 50: y=50; Stm_Rounds(y); break;
		case 51: y=51; Stm_Rounds(y); break;
		case 52: y=52; Stm_Rounds(y); break;
		case 53: y=53; Stm_Rounds(y); break;
		case 54: y=54; Stm_Rounds(y); break;
		case 55: y=55; Stm_Rounds(y); break;
		case 56: y=56; Stm_Rounds(y); break;
		case 57: y=57; Stm_Rounds(y); break;
		case 58: y=58; Stm_Rounds(y); break;
		case 59: y=59; Stm_Rounds(y); break;
		case 60: y=60; Stm_Rounds(y); break;
		case 61: y=61; Stm_Rounds(y); break;
		case 62: y=62; Stm_Rounds(y); break;
		case 63: y=63; Stm_Rounds(y); break;
		case 64: y=64; Stm_Rounds(y); break;
		case 65: y=65; Stm_Rounds(y); break;
		case 66: y=66; Stm_Rounds(y); break;
		case 67: y=67; Stm_Rounds(y); break;
		case 68: y=68; Stm_Rounds(y); break;
		case 69: y=69; Stm_Rounds(y); break;
		case 70: y=70; Stm_Rounds(y); break;
		case 71: y=71; Stm_Rounds(y); break;
		case 72: y=72; Stm_Rounds(y); break;
		case 73: y=73; Stm_Rounds(y); break;
		case 74: y=74; Stm_Rounds(y); break;
		case 75: y=75; Stm_Rounds(y); break;
		case 76: y=76; Stm_Rounds(y); break;
		case 77: y=77; Stm_Rounds(y); break;
		case 78: y=78; Stm_Rounds(y); break;
		case 79: y=79; Stm_Rounds(y); break;
		case 80: y=80; Stm_Rounds(y); break;
		case 81: y=81; Stm_Rounds(y); break;
		case 82: y=82; Stm_Rounds(y); break;
		case 83: y=83; Stm_Rounds(y); break;
		case 84: y=84; Stm_Rounds(y); break;
		case 85: y=85; Stm_Rounds(y); break;
		case 86: y=86; Stm_Rounds(y); break;
		case 87: y=87; Stm_Rounds(y); break;
	}
	
	if(speed_fake>87)
	{
		Stm_Rounds(87);
	}
	
	printf("\n\n\nGear: %d\nSpeed: %d km/h",gear,speed);
	
	printf("\n\n\n");
}

main()
{
	int speed_fake=0;
	int speed=0;
	int speed_max=87;
	int gear=1;
	char x='0';
		
	do
	{
		Print(x,gear,speed_fake,speed);
		
		x=getch();
		
		if(x=='w')
		{
			if(speed_fake>87)
			{
				
			}
			else
			{
				switch(gear)
				{
					case 1:
						
						speed_fake=Increase(speed_fake,6);
						speed=Increase(speed,5);
						
						break;
						
					case 2:
						
						speed_fake=Increase(speed_fake,3);
						speed=Increase(speed,5);
						
						break;
						
					case 3:
						
						speed_fake=Increase(speed_fake,3);
						speed=Increase(speed,5);
						
						break;
						
					case 4:
						
						speed_fake=Increase(speed_fake,2);
						speed=Increase(speed,5);
						
						break;
					
					case 5:
						
						speed_fake=Increase(speed_fake,1);
						speed=Increase(speed,5);
						
						break;
						
					case 6:
						
						speed_fake=Increase(speed_fake,1);
						speed=Increase(speed,5);
						
						break;
				}
			}
		}
		
		if(x=='s')
		{
			if(speed<=0)
			{
				
			}
			else
			{
				switch(gear)
				{
					case 1:
						
						speed_fake=Decrease(speed_fake,4);
						speed=Decrease(speed,5);
						
						break;
						
					case 2:
						
						speed_fake=Decrease(speed_fake,4);
						speed=Decrease(speed,5);
						
						break;
						
					case 3:
						
						speed_fake=Decrease(speed_fake,4);
						speed=Decrease(speed,5);
						
						break;
						
					case 4:
						
						speed_fake=Decrease(speed_fake,4);
						speed=Decrease(speed,5);
						
						break;
					
					case 5:
						
						speed_fake=Decrease(speed_fake,4);
						speed=Decrease(speed,5);
						
						break;
						
					case 6:
						
						speed_fake=Decrease(speed_fake,4);
						speed=Decrease(speed,5);
						
						break;
				}
			}
		}
		
		if(x=='i')
		{
			switch(gear)
			{
				case 1:
					
					gear++;
					speed_fake=Decrease(speed_fake,35);
					
					break;
					
				case 2:
					
					gear++;
					speed_fake=Decrease(speed_fake,30);
					
					break;
					
				case 3:
					
					gear++;
					speed_fake=Decrease(speed_fake,25);
					
					break;
					
				case 4:
					
					gear++;
					speed_fake=Decrease(speed_fake,20);
					
					break;
				
				case 5:
					
					gear++;
					speed_fake=Decrease(speed_fake,5);
					
					break;
			}
		}
		
		if(x=='k')
		{
			switch(gear)
			{
				case 2:
					
					gear--;
					speed_fake=Increase(speed_fake,60);
					speed=Decrease(speed,10);
					
					if(speed_fake>87)
					{
						speed_fake=87;
					}
					
					break;
					
				case 3:
					
					gear--;
					speed_fake=Increase(speed_fake,50);
					speed=Decrease(speed,10);
					
					if(speed_fake>87)
					{
						speed_fake=87;
					}
					
					break;
					
				case 4:
					
					gear--;
					speed_fake=Increase(speed_fake,40);
					speed=Decrease(speed,10);
					
					if(speed_fake>87)
					{
						speed_fake=87;
					}
					
					break;
				
				case 5:
					
					gear--;
					speed_fake=Increase(speed_fake,30);
					speed=Decrease(speed,10);
					
					if(speed_fake>87)
					{
						speed_fake=87;
					}
					
					break;
					
				case 6:
					
					gear--;
					speed_fake=Increase(speed_fake,20);
					
					if(speed_fake>87)
					{
						speed_fake=87;
					}
					
					break;
			}
		}
		
		Sleep(10);
		
	}while(1==1);
}
