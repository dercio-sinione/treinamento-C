#include<stdio.h>
int main(){
	int n[4],i,m=0;
	for(i=0;i<4;i++){
		scanf("%d", &n[i]);
		if(n[i]>m){
			m=n[i];
		}
	}
	printf("O maior numero eh %d", m);
}
