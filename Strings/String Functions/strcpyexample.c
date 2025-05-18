#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char text1[100], text2[100];

    printf("Enter String: ");
    fgets(text1, sizeof(text1), stdin); // safer alternative to gets()

    // Remove newline character from fgets
    text1[strcspn(text1, "\n")] = '\0';

    printf("The String Before Copy Is: %s\n", text1);

    strcpy(text2, text1);

    printf("Text After Copy Is: %s\n", text2);

    return 0;
}

