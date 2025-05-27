//program to show the example of pointer


#include<stdio.h>
int main(){
	int a = 5;
	int *ptr;
	ptr = &a;
	
	printf("The Address Of A Is %u",ptr);
	printf("\nThe Value Of A IS %d",a);
	printf("\nThe Value Of A Is %d",*ptr);
	printf("\nThe Address Of A IS %u",&a);
	printf("\nThe Address Of ptrt Is %u",&ptr);

	
	return 0;
}

/*
OUTPUT: 
The Address Of A Is 
The Value Of A IS
The Value Of A Is
The Address Of A IS
The Address Of ptrt Is

*/
