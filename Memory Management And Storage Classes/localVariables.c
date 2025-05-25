#include<stdio.h>
void functionOne(){
	int localVar = 10;
	printf("Local Variable In functionOne: %d \n", localVar);
}

void functionTwo(){
	int localVar = 20;
	printf("Local Variable In functionTwo: %d \n", localVar);
}

int main(){
	
	functionOne();
	functionTwo();
	return 0;
}


/*
Local Variable In FunctionOne: 10
Local Variable In FunctionTwo: 20


1. Local variable are declared within a function block.
2. The scope is limited and remains within rhe function only in which they are declared.
3. Any change in the local variable does not affect other functions of the program.
4. A local variable is created when the function is excuted, and once the execution is finished, the variable is destroy.
5. It can only be accessed by the function statements in which it is declared and not by the other functions.
6. If the local variable is not initialized, it takes the garabage value by default.
7. Local variables are stored in a stack in memory.
8. We can declared various variables with the same name but in other functions.

*/
