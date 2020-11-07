#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
int main(){
	float raiz2;
	int n=0,mult,i;
	puts("Digite o valor desejado");
	scanf("%d", &n);
	system("cls");
	do{
		
		n++;
		i=n;
			mult=(n*i);
		_sleep(500);
		printf("%dx%d=%d\n", n,i, mult);
		i++;
	} while(mult<25);
}
