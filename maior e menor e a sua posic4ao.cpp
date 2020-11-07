#include<stdio.h>
int main(){
	int a[6], menor,maior,p_menor,p_maior;
	puts("Digite os respectivos numeros seu burro");
	for(int i=0;i<6;i++){
		scanf("%d", &a[i]);
			if(i==0){
			maior=a[i];
			menor=a[i];
		}
		else{
			if(a[i]>maior){
				maior=a[i];
				p_maior=i;
			}
			if(a[i]<menor){
				menor=a[i];
				p_menor=i;
			}
		}
	}
	printf("O maior numero eh %d e a sua posicao no vetor eh %d\n\n", maior, p_maior);
	printf("O maior numero eh %d e a sua posicao no vetor eh %d\n", menor, p_menor);	
}
//
