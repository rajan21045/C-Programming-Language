#include<stdio.h>
#include<string.h>

int main()
{
	char s[30];
	
	printf("Enter The String To Find Length: ");
	gets(s);
	
	int len = strlen(s);
	printf("The Length Of String Is %d", len);
	
	return 0;
}

/*
Strlen(str): 

This string function is used to find out the exact length of the string. 
The return value of strlen(str) is integer.

For Example:
char subject[] = "C Programming";
Output:
Length: 13

*/
