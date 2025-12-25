/*

* 
* * 
* * * 
* * * * 
* * * * *

*/
#include<stdio.h>
int main(){
	int i,j,k,l;
	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){
			printf("*\t");
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	for(k=1; k<=20; k++){
		for(l=1; l<=k; l++){
			printf("*\t");
		}
		printf("\n");
	}
	
	
	return 0;
}
