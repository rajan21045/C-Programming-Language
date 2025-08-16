/*
C Program to Print the First Letter of Each Word

In a string that contains multiple words, each word is separated by a whitespace. In this program, we will learn how to print the first letter 
of each word using a C program.

Using strtok()
There are many approach to print the first letter of each word using a C program. One of the approach is to use the strtok() function, which 
breaks a string into tokens based on delimiters. We can use space ' ' as the delimiter to extract each word from the string and print the first 
character of each word.

*/

#include<stdio.h>
#include<string.h>
int main(){
	char c[] = "Hello I Am Rajan Poudel.";
	print(c);
	
}
void print( char *c){
	
	char *word = strtok(c," ");
	while(word != NULL){
		printf("%c \t", word[0]);
	word = strtok(NULL, " ");	
	}
}

/*
Output:
H I A R P
*/
