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

/*
strcmp(string1, string2):-

- This string comparison is used to compare two string components. The output of comparison is an integer value either positive (+) or negative (-) or equal to (0,0) zero.
- The output of this function is zero if string1 and string2 are equal.
- The output of this function is positive if string1 has higher character than string2.
- The output of this function is negative if string1 has lower character than string2.
- The comparison is performed in chronological order - like dictionary.

eg:
char string1[] = "computer";
    char string2[] = "science";
    strcmp(string1, string2); // returns -1
    
*/
