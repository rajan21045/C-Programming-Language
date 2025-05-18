#include<stdio.h>
#include<string.h>
int main(){
	char text[100];
	
	printf("Enter A String To Convert Into Lowercase: ");
	gets(text);
	
	printf("\n");
	printf("Original Text Is %s \n", text);
	
	strlwr(text);
	printf("\n");
	printf("Text After Conversion Into Lowercase: %s",text);
		
	return 0;
}

/*
strlwr(text):
This function is used to change uppercase letter into lowercase letter. If the letter is already in lowercase, 
it remains same and only uppercase letter is change in lowercase letter.

For Example:

char[text] = "RAAJAN";
Output: raajan


*/
