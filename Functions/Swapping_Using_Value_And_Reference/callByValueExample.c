/*
Q: Why doesn't the value of x and y change after calling the swap() function?

This program demonstrates "Call by Value" in C.
The swap() function receives copies of the variables x and y, so the original values remain unchanged.
*/

#include <stdio.h>

// Function to swap two integers (Call by Value)
void swap(int n1, int n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

    // Print values inside the function to show they are swapped here
    printf("\n[Inside swap()] After Swapping: n1 = %d, n2 = %d", n1, n2);
}

int main() {
    
    int x = 20, y = 69;

    // Print original values
    printf("Before Swapping in main(): x = %d, y = %d", x, y);

    // Call the swap function
    swap(x, y);

    // Print values after swap attempt
    printf("\nAfter Swapping in main(): x = %d, y = %d", x, y);

    return 0;
}

