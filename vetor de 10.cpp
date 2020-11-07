#include<stdio.h>
int main(){
	int a[10], i,m=0,n=0;
	for(int i=0;i<4;i++){
		scanf("%d", &a[i]);
			if(a[i]>m){
			m=a[i];
		}
		else{
			n=a[i];
		}
	}
	printf("O maior eh %d", m);
	printf("O menor eh %d", n);
}
