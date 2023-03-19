#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
	int vet[100]={100,200,500,1000,2000,5000,10000,20000,50000,100000,200000,500000,1000000};
	int i;
	
	for(i=0;i<13;i++)
	{
		int f=vet[i];
		int r=1000;
		double c=150*pow(10,-9);
		double w=2*M_PI*f;
		double im=(w*r*c)/(1+(w*w*c*c*r*r))*-1;
		double re=1/(1+(w*w*c*c*r*r));
		double fase=atan(im/re);
		double modulo=sqrt((im*im)+(re*re));
		double ritardo=-1*(fase/w)*10*10*10*10*10*10;
		double vout=modulo*10;
		
		if(i==0)
		{
			printf("\n\n\n\n\n\n\n	R: %d\n",r);
			printf("	C: %10.9f\n",c);
			printf("	W: %f\n\n",w);
		}
		
		printf("	Frequenza: %d	",f);
		
		if(vet[i]<10000)
		{
			printf("	");
		}
		
		printf("IM: %f    ",im);
		printf("RE: %f    ",re);
		printf("Fase: %f    ",fase);
		printf("Modulo: %f    ",modulo);
		printf("Ritardo: %10.9f    ",ritardo);
		printf("Vout: %f    ",vout);
		
		printf("\n\n");
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
}
