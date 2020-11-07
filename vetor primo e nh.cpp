#include<stdio.h>
//const int vetor=4;
int main(){
	int n[4],i,c=0,c1=0;
	for(i=0;i<4;i++){
		puts("Digite um numero");
		scanf("%d", &n[i]);
		if(n[i]%2==0){
			puts("O numero digitado eh par");
			c+=n[i];
		}
		else{
			puts("O numero digitado eh impar");
			c1+=n[i];
		}
	}
	printf("A Soma dos pares eh=%d\n\n", c);
		printf("A Soma dos impares eh=%d\n\n", c1);
}
