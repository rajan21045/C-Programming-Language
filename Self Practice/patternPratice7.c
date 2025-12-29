/*

    *
   ***
  *****
 *******
*********


*/

#include<stdio.h>
void main(){
	int i,j,n=5,m=5;

	for(i=1; i<=5; i++){
		for(j=1; j<=9; j++){
			if(j<m || j >n){
				printf(" ");
			}else{
				printf("*");
//				j++;
			}
		}
		m--;
		n++;
		printf("\n");
	}
}
