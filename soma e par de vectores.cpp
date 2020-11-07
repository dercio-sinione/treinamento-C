#include<stdio.h>

int main(){
	
	int v1[5], v2[5],v3[10];
	int i, j=0, soma=0;
	puts("Digite os numeros");
	for(i=0;i<5;i++)
	{
		scanf("%d", &v1[i]);
		if(v1[i]%2==0){
		printf("O numero eh par\n");}
		else{
		puts("O  Numero nao eh par\n");
		}
	}
		scanf("%d", &v2[i]);
		if(v2[i]%2==0){
		printf("O primeiro numero eh par\n");}
		else {
		puts("O primeiro Numero nao eh par\n");
		}
		}
	/*	v3[j]=v1[i];
		j++;
			v3[j]=v2[i];
		j++;		
	}
	puts("");
	for(j=0;j<10;j++){
		printf("%d", v3[j]);
		if(v3[i]%2==0){
			soma+=v3[i];
		}
		printf("%d\n", "A Soma dos pares eh", soma);
	}
	*/




