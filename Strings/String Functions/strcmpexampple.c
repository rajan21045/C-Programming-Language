#include<stdio.h>
#include<string.h>
int main(){
	char text1[100],text2[100];
	int value;
	printf("Enter First String: ");
	scanf("%s",text1);
	printf("Enter Second String: ");
	scanf("%s",text2);
	
	value= strcmp(text1, text2);
	if(value==0)
	{
		printf("Both String Are Same...");
	}
	else if(value==-1)
	{
		printf("Text1 Come First.");
	}
	else{
		printf("Text2 Come First.");
	}
	
	
	
	
	
	
	return 0;
}
