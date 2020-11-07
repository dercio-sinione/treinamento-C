#include<stdio.h>
int main(){
	int n[4],i,m,j;
	for(i=0;i<4;i++){
		scanf("%d", &n[i]);
	}
	puts("Multiplus de 2:");
	
	for(j=0;j<4;j++){
		if(n[j]*2/n[j]==0 && n[j]%2==0){
			printf("&d", n[j]);
		}
}
}

