#include<stdio.h>
#include<string.h>
int main(){
	char first_name[100], second_name[100];
	
	printf("Enter First String: ");
	scanf("%s",&first_name);
	
	printf("Enter Second String: ");
	scanf("%s",&second_name);
	printf("\n");
	
	printf("String Before Concatenation Is %s",first_name);
	printf("\n");
	
	strcat(first_name, second_name);
	printf("String After Concatenatio Is %s", first_name);

	return 0;
}




/*
strcat(destination,source): 

This string function is used to concatenate/merged two string in first one. The destination must be capable of holding extra length of characters from source string 
otherwise the output will be truncated at its maximum length. ALl the characters of the source string will be attached after the destination string without any spaced 
placed. The result will stores in destination variable name.


For Example:
First String: Rajan
Second String: Prabin
String Before Concatenation Is Rajan
String After Concatenation Is RajanPrabin


*/
