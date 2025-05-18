#include<stdio.h>
#include<string.h>
int main(){
	char text[100];
	printf("Enter Text: ");
	gets(text);
	
	printf("Before Uppercase Text Is %s",text);
	
	printf("\n");
	
	strupr(text);
	printf("Text After Conversion Into Uppercase Is %s",text);
	
	
	
	
	
	return 0;
}
