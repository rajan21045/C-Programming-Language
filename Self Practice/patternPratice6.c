/*
    *
   * *
  * * *
 * * * *
* * * * *

*/

#include<stdio.h>
void main(){
	int i,j;
	int a= 5,b=5;
	for(i=1; i<=5; i++){
		for(j=1; j<=9; j++){
			if(j<a || j >b){
				printf(" ");
			}else{
				printf("* ");
				j++;
			}
		}
		a--;
		b++;
		printf("\n");
	}
}
