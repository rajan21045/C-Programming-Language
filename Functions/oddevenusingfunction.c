/*
write a program to find out given number is even or odd using function.
*/

#include<stdio.h>
int main()
{
	number();
	return 0;
}
 
void number(){
	int a;
	printf("Enter A Number: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d Is Even Number",a);
	}
	else{
		printf("%d Is Odd Number",a);
	}
}


