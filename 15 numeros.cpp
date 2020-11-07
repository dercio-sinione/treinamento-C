#include<stdio.h>
main()
{
	int i,maior,menor,posmenor,posmaior;
	int vector[15];
	for(i=0;i<15;i++){
	
	printf("digite o primeiro valor");
	scanf("%d",&vector[i]);}
	if(i==0)
	{
		maior=vector[i];
		posmaior=i;
		menor=vector[i];
		posmenor=i;
}
else
{
	if(vector[i]>maior)
	{
		maior=vector[i];
		posmaior=i;
	}
	if(vector[i]<menor)
	{
		menor=vector[i];
		posmenor=i;
	}
	printf("o maior numero e %d",maior);
	printf("a sua pos e %d",posmaior);
	printf(" o menor numero e %d",menor);
	printf(" a sua pos e %d",posmenor);
}
	}
	
