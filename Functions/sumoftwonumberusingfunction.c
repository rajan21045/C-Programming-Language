/*
function with arguments and no return values
*/

#include<stdio.h>
void add(int,int);
int main()
{
	int a,b;
	printf("Enter The Values Of A And B: ");
	scanf("%d%d",&a,&b);
	
	//function calling
	add(a,b);//actual parameters
	return 0;
}

//function definition
void add(int x, int y) //formal parameters
{
	int c; 
	c = x+y;
	printf("\n Sum Is %d",c);
}
/*
syntax:

void main(){
function_name(arguments);
}
void function_name(arguments){
YOur Code Here
}
*/
