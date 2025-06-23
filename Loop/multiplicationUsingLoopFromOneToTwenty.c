#include<stdio.h>

int main(){
    int i;
    unsigned long long multi = 1; // Initialize to 1 to avoid undefined behavior and allow correct multiplication
    
    // Loop from 1 to 20 to calculate the product (i.e., factorial of 20)
    for(i = 1; i <= 20; i++){
        multi *= i; // Multiply multi by i in each iteration
    }

    // Print the final result using %llu for unsigned long long
    printf("The Multiplication From 1 To 20 Is %llu", multi);

    return 0;
}

/*
Why we use unsigned long long:
- The result of multiplying numbers from 1 to 20 (i.e., 20!) is a very large number: 2432902008176640000.
- 'int' or 'long' types can't store such large values, so we use 'unsigned long long'.

Why initialization matters:
int multi;
This declares 'multi' without initializing it. So it contains a garbage value, and multiplying it leads to undefined behavior.
Always initialize variables before use, especially in arithmetic operations.
*/

