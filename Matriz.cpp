#include<stdio.h>
main (){
	int n[2][3];
	int i,j;
	for(i=0; i<2; i++){
	       for(j=0;j<3;j++){
		scanf("%d", &n[i][j]);
	}
	}
	for(i=0;i<2;i++){
	for(j=0;j<3;j++){
		puts("\n");	
		printf("%d\n",n[i][j]);
	}	
}
}
	
	

