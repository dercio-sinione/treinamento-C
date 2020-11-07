#include<stdio.h>
int main (){
	int a[10],i, m=0;
	
	for(i=0;i<10;i++){
		scanf("%d", &a[i]);
		/*if(i==0){
			m=a[i];
		}
		else{*/
			if(a[i]>m){
				m=a[i];
			}
		}
		printf("O Maior numero eh %d",m);
	}

