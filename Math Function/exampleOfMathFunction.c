/*

There is also a list of math functions available, that allows you to perform mathematical tasks on numbers.
To use them, you must include the math.h header file in your program: #include <math.h>

*/

#include<math.h>
#include<stdio.h>

int main (){
	/* Square Root
 	To find the square root of a number, use the sqrt() function: */
	int num = 100;
	printf("Square Root:\n");
	printf("The Square Root Of %d Is %.2f.",num, sqrt(num));
		
	printf("\n\n");
	
	/* Round a Number
	The ceil() function rounds a number upwards to its nearest integer, and the floor() 
	method rounds a number downwards to its nearest integer, and returns the result:
	*/
	float n = 11.11;
	printf("Round a Number:\n");
	printf("The Ceiling Value Of %.2f is %.2f", n, ceil(n));
	printf("\nThe Floor Value Of %.2f is %.2f", n, floor(n));
	
	printf("\n\n");
	
	/*
	Power
	The pow() function returns the value of x to the power of y (x^y):
	*/	
	printf("Power: \n");
	printf("Power Is %f", pow(n, 4));
	
	return 0;
	
}
