#include<stdio.h>
main()
{
	int a[6],n,c=0,ac=0;
	for(n=0;n<6;n++)
	{
		printf("digite os valor\n");
		scanf("%d",&a[n]);
	}
	for(n=0;n<6;n++)
	{
		printf("\n");
		if(a[n]%2==0)
		{
			c++;
		printf("O numero e par %d \n",a[n]);
		}
		if(a[n]%2==1){
			ac++;
			printf("O numero e impar %d \n",a[n]);
		}
	     
	}printf("sao %d \n",c);
	printf("sao %d \n",ac);
}
