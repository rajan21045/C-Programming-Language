#include<stdio.h>

int main() {
    // Declare a character variable to store the input
    char character;
    
    // Prompt the user to enter a lowercase character
    printf("Enter The Character To Check In LowerCase: ");
    scanf("%c", &character);  // Read the character input from the user

    // Use switch-case to check if the entered character is a vowel
    switch(character) {
        case 'a':  // If character is 'a'
            printf("You Have Entered ' %c ' Character Which Is Vowel.", character);
            break;

        case 'e':  // If character is 'e'
            printf("You Have Entered ' %c ' Character Which Is Vowel.", character);
            break;

        case 'i':  // If character is 'i'
            printf("You Have Entered ' %c ' Character Which Is Vowel.", character);
            break;

        case 'o':  // If character is 'o'
            printf("You Have Entered ' %c ' Character Which Is Vowel.", character);
            break;

        case 'u':  // If character is 'u'
            printf("You Have Entered ' %c ' Character Which Is Vowel.", character);
            break;

        default:   // If the character is not a vowel
            printf("You Have Entered ' %c ' Character Which Is Consonant.", character);    
    }

    // Print thank you message
    printf("\nThank You.");

    return 0;  // Exit the program
}

