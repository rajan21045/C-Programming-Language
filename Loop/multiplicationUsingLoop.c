#include<stdio.h>

int main(){
    int n, i;

    // Ask the user to input a number for multiplication table
    printf("Enter The Number For The Multiplication: ");
    scanf("%d", &n); // Read the user input and store it in variable 'n'

    // Loop from 1 to 10 to display the multiplication table of 'n'
    for(i = 1; i <= 10; i++){
        // Print the multiplication in the format: n * i is result
        printf("%d * %d is %d \n", n, i, (n * i));
    }

    return 0; // End of the program
}

/*
Explanation:
- This program takes a number 'n' from the user and prints its multiplication table from 1 to 10.
- The loop runs 10 times (i = 1 to 10), and in each iteration, it prints one line of the table.
- Example input: 5
  Output:
  5 * 1 is 5
  5 * 2 is 10
  ...
  5 * 10 is 50
*/

