#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int n[6];
	int  i,ac=0,ab=0;
	puts("Digite os numeros");
	for(i=0;i<6;i++){
		scanf("%d", &n[i]);
		
		if(n[i]%2==0){
		
		ac+=n[i];
		printf("O numero � par\n");
	}
		else{
		
			ab+=n[i];
			printf("O numero n�o � par\n");
	}	
	} 		 
	printf("A soma dos numeros pares s�o %d\n",ac);
	printf("A soma dos numerso impares s�o %d\n",ab);
	
}
