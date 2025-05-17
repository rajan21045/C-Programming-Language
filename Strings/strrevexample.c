#include<stdio.h>
#include<string.h>

int main(){
	
	char text[100];
	printf("Enter The String To Reverse: ");
	gets(text);
	
	printf("\n");
	
	printf("Original Text Is %s \n",text);
	
	printf("\n");
	
	strrev(text);
	printf("Reversed String Is %s", text);

	return 0;
}

/*
strrev(str):

This String function is used to reversed the string.
The return value of strrev(str) is String.

Example:
char subject[] = "Rajan";
Output:
Reverse: najaR 
*/
