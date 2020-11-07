#include<stdio.h>
#include<stdlib.h>
main()
{
	int n[10],x,c=0,ac=0,s=0,s1=0;
	for(x=0;x<=10;x++)
	{
		printf("digite um numero \n");
		scanf("%d",&n[x]);
		if(n[x]<0){
			ac++;
		s=s+n[x];
		
		}printf(" \n");	
		
		if(n[x]>0){
			
			c++;
		s1=s1+n[x];
		}
		
	}printf("a quantidade de numeros negativos %d e a soma =%d\n",ac,s );
	printf("A quantidade os numeros positivos %d e a soma =%d\n",c,s1);
}
