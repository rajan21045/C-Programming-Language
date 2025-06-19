/*

program to show the example of formal arguments and actual arguments.

*/

#include<stdio.h>

int sum(int a, int b) //formal argument
				{	
									return a+b;
				}


int multiply(int c, int d) //formal argument
					{
						return c*d;
						}


int main()
{
	
	int x,y;
	
	printf("Enter Two Number: ");
	scanf("%d%d",&x,&y); //actual argument
	
	int result,multi;
	
	result = sum(x,y);
	multi = multiply(x,y);
	
	printf("\nSum of %d and %d Is %d",x,y, result);
	printf("\nMultification of %d and %d Is %d",x,y, multi);
	
	return 0;
}

/*
Type of Argument 

1. Formal Parameter
   parameter written on function defination is called formal parameter. These are always variable.
   
2. Actual Parameter 
   parameter written in function call is called actual parameter. number, expression or even function call are actual parameter.

*/
