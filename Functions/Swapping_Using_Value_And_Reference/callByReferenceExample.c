/*
Q: How does using pointers allow the swap() function to change the original values of x and y?

This program demonstrates "Call by Reference" in C.
By passing the addresses of variables using pointers, the swap() function can modify the actual values in memory.
*/

#include <stdio.h>

// Function to swap two integers using pointers (Call by Reference)
void swap(int *n1, int *n2) {
    int temp;
    temp = *n1;    // Store value pointed by n1
    *n1 = *n2;     // Copy value from address n2 to address n1
    *n2 = temp;    // Copy temp (original n1) to address n2

    // Print values inside the function to show successful swap
    printf("\n[Inside swap()] After Swapping: n1 = %d, n2 = %d", *n1, *n2);
}

int main() {
    int x = 20, y = 69;

    // Print original values
    printf("Before Swapping in main(): x = %d, y = %d", x, y);

    // Call swap and pass addresses of x and y
    swap(&x, &y);

    // Print values after swap
    printf("\nAfter Swapping in main(): x = %d, y = %d", x, y);

    return 0;
}

