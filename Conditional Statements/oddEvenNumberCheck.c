/*

WAP to find out given number is even or odd?

*/

#include<stdio.h>
int main(){
	int num;
	
	
	printf("Hey, \nEnter The Number To Check: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("%d Is Even Number.",num);
	}
	else if(num==0){
		printf("%d Is Zero.",num);
	}
	else{
		printf("%d Is Odd Number.",num);
	}
	
	return 0;
}

