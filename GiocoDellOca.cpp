#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<time.h>
#include<Windows.h>

using namespace std;

#define MAX_GIOCATORI 100
#define DIM_MAPPA 20

int n_giocatori;

void textcolor(unsigned short color)
{
    HANDLE hconsole  = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hconsole == INVALID_HANDLE_VALUE) return;
    SetConsoleTextAttribute(hconsole,color);
}

struct st
{
	int id;
	int posizione;
};

struct st mappa[MAX_GIOCATORI];

void Init(int n_giocatori)
{
	int i;
	
	for(i=0;i<n_giocatori;i++)
	{
		mappa[i].id=i;
		mappa[i].posizione=1;
	}
}

void Stampa_Posizioni()
{
	int i;
	
	cout << "\n-------------------------------------\n";
	
	for(i=0;i<n_giocatori;i++)
	{
		cout << "Giocatore " << i+1;
		cout << "	Posizione: " << mappa[i].posizione;
		cout << "\n-------------------------------------\n";
	}
}

void Stampa_Mappa()
{
	int i;
	
	cout << "					MAPPA\n\n		";
	
	for(i=0;i<DIM_MAPPA;i++)
	{
		if(i<9)
		{
			cout << i+1 << "  ";
		}
		else
		{
			cout << i+1 << " ";
		}
	}
	
	cout << "\n		";
	
	for(i=1;i<=DIM_MAPPA;i++)
	{
		switch(i)
		{
			case 1: cout << "0  "; break;
			
			case 2: cout << "0  "; break;
			
			case 3: cout << "0  "; break;
				
			case 4: cout << "0  "; break;
				
			case 5: textcolor(2); cout << "+2 "; break;
				
			case 6: cout << "0  "; break;
				
			case 7: cout << "0  "; break;
				
			case 8: cout << "0  "; break;
				
			case 9: cout << "0  "; break;
				
			case 10: cout << "0  "; break;
			
			case 11: textcolor(4); cout << "-1 "; break;
			
			case 12: cout << "0  "; break;
			
			case 13: cout << "0  "; break;
				
			case 14: cout << "0  "; break;
				
			case 15: cout << "0  "; break;
				
			case 16: cout << "0  "; break;
				
			case 17: cout << "0  "; break;
				
			case 18: textcolor(4); cout << "-2 "; break;
				
			case 19: cout << "0  "; break;
			
			case 20: cout << "0  "; break;
		}
		
		textcolor(7);
	}
	
	for(i=0;i<n_giocatori;i++)
	{
		cout << "\nGiocatore " << i+1;
		
		textcolor(6);
		
		switch(mappa[i].posizione)
		{
			
			case 1: cout << "     #"; break;
			
			case 2: cout << "        #"; break;
			
			case 3: cout << "           #"; break;
				
			case 4: cout << "              #"; break;
				
			case 5: cout << "                 #"; break;
				
			case 6: cout << "                    #"; break;
				
			case 7: cout << "                       #"; break;
				
			case 8: cout << "                          #"; break;
				
			case 9: cout << "                             #"; break;
				
			case 10: cout << "                                #"; break;
			
			case 11: cout << "                                   #"; break;
			
			case 12: cout << "                                      #"; break;
			
			case 13: cout << "                                         #"; break;
				
			case 14: cout << "                                            #"; break;
				
			case 15: cout << "                                               #"; break;
				
			case 16: cout << "                                                  #"; break;
				
			case 17: cout << "                                                     #"; break;
				
			case 18: cout << "                                                        #"; break;
				
			case 19: cout << "                                                           #"; break;
			
			case 20: cout << "                                                              #"; break;
		}
		
		textcolor(7);
	}
	
	cout << "\n\n";
}

void Stampa()
{
	system("cls");
			
	Stampa_Mappa();
		
	Stampa_Posizioni();
}

main()
{
	int menu;
	int i,j;
	int giocatore;
	int azione;
	bool val,x=false;
	int winner;
	
	do
	{
		val=false;
		
		system("cls");
		
		if(!x)
		{
			cout << "1)Gioca\n0)Esci\n\nMenu: ";
			cin >> menu;
		}
		else
		{
			cout << "1)Gioca Un'Altra Partita\n0)Esci\n\nMenu: ";
			cin >> menu;
		}
		
		switch(menu)
		{
			case 0:
				
				system("cls");
				
				cout << "Uscita..";
				
				break;
				
			case 1:
				
				do
				{
					
					x=true;
					
					system("cls");
					
					cout << "Numero Giocatori: ";
					cin >> n_giocatori;
					
					if(n_giocatori<1 or n_giocatori>4)
					{
						textcolor(4);
						
						printf("Error Intervallo [1-4]");
						
						textcolor(7);
						
						cout << "\n\n";
						
						system("pause");
					}
					
				}while(n_giocatori<1 or n_giocatori>4);
				
				Init(n_giocatori);
				
				do
				{
					giocatore=0;
					
					while(giocatore<n_giocatori and !val)
					{
						Stampa();
						
						cout << "\nTurno Giocatore " << giocatore+1;
						
						cout << "\n\nLancia Dado:\n\n";
						
						system("pause");
						
						srand(time(NULL));
						
						azione=rand()%6+1;
						
						Stampa();
						
						cout << "\nTurno Giocatore " << giocatore+1;
						
						cout << "\n\nLancia Dado: " << azione << "\n\n";
						
						system("pause");
						
						
						for(j=0;j<azione;j++)
						{
							mappa[giocatore].posizione++;
						}
						
						switch(mappa[giocatore].posizione)
						{	
							case 5:
								
								mappa[giocatore].posizione++;
								mappa[giocatore].posizione++;
								
								break;
								
							case 11:
								
								mappa[giocatore].posizione--;
								
								break;
								
							case 18:
								
								mappa[giocatore].posizione--;
								mappa[giocatore].posizione--;
								
								break;
								
							case 20:
								
								val=true;
								winner=giocatore;
								
								break;
						}
						
						if(mappa[giocatore].posizione>20)
						{
							mappa[giocatore].posizione=1;
						}
						
						giocatore++;
					}
					
				}while(!val);
				
				Stampa();
				
				cout << "\n\nIl Giocatore " << winner+1 << " Vince\n\n";
				
				system("pause");
				
				break;
		}
		
	}while(menu!=0);
}
