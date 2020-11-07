#include<stdio.h>
const int vetor=4;
int main(){
	int n[vetor],i,c=0,c1=0;
	for(i=0;i<vetor;i++){
		puts("Digite um numero");
		scanf("%d", &n[vetor]);
		if(n[vetor]%2==0){
			puts("O numero digitado eh par");
			c+=n[vetor];
		}
		else{
			puts("O numero digitado eh impar");
			c1+=n[vetor];
		}
	}
	printf("A Soma dos pares eh=%d\n\n", c);
		printf("A Soma dos impares eh=%d\n\n", c1);
}
