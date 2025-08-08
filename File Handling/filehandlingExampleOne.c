#include <stdio.h>

int main() {
    FILE *fp;
    
    // Append text
    fp = fopen("D:\\c\\class & pratice\\text.txt", "a");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fp, "\nHello World!");
    fclose(fp);
    
    // Read the whole file
    fp = fopen("D:\\c\\class & pratice\\text.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    
    char myString[200];
    while (fgets(myString, sizeof(myString), fp) != NULL) {
        printf("%s", myString);
    }
    
    fclose(fp);
    return 0;
}

