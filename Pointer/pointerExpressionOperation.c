#include<stdio.h>
int main(){
	int a=5;
	int *ptr;
	ptr = &a;
	printf("Actual Value Of ptr Is %u ",ptr);
	ptr++; //increase the address pointed by ptr by 4
	printf("\nValue After Increment Of ptr Is %u", ptr);
	ptr--; //decrease the address pointed by ptr by 4
	printf("\nValue After Decrement Of ptr Is %u", ptr);
	
	return 0;
}

/*
Pointer Expresstion ANd Asignment

we can perform the following operation on pointers

1. Increment(++)
2. Decrement(--)
3. Addition of integer to the pointer (+)
4. Subtraction of the integer to the pointer(-)
5. Subtraction of the pointer from  another pointer
6. Comparison of two pointer

we can't perform the following operation on pointers

1. Addition of two pointer 
2. Multification of two pointer 
3. Division of two pointer



1. Incrementing a pointer (++)
Any pointer variable when incremented (++) points to the next memory location of its types.

int *p, a = 5;
p = &a;
p++;  // Increases the address stored in p by 4 bytes
(*p)++;  // Increases the value of a by 1



2. Decrementing a pointer (--)
Any pointer variable when decremented (--) it points to the previous memory location of its types.

int *p, a = 5;
p = &a;
p--;
(*p)--;

*/
