/*
write a program to find out the smallest number between two numbers using function.
*/

#include<stdio.h>
int main()
{
	nums();
	return 0;
}

void nums(){
	int a,b;
	printf("Enter Two Number: ");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("%d Is Smallest Number.",a);
	}
	else if(b<a){
		printf("%d Is Smallest Number",b);
	}
	else{
		printf("Both Number Are Same Which Is %d",a);
	}
}
