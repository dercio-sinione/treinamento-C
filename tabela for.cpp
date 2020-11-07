#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
main(void){
	int n=0,c=0,mult;
	system("color 3");
	puts("Digite o valor desejado");
	scanf("%d", &n);
	system("cls");
	for(int i=0;i<=12;i++){
		mult=(n*i);
		_sleep(300);
		printf("%dx%d=%d\n", n,i, mult);
	}
}
