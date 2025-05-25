#include<stdio.h>
int globalVar = 100;

void incrementGlobalVar(){
	globalVar +=10;
}

int main(){
	printf("Initial GlobalVar: %d \n",globalVar);
	incrementGlobalVar();
	printf("Modified GlobalVar: %d \n", globalVar);
	return 0;
}


/*
Output: 
Intial GlobalVar: 100
Modified GlobalVar: 110



1. Global Variables are declared outside all the function blocks.
2. The scopes remains throughtout the program.
3. Any change in global variable affects the whole program, wherever it is being used.
4. A global variable exits in the program for the entire time the program is excuted.
6. It can be occessed throughtout the program by all the functions present in the program.
7. If the global variable is not initialized, it takes zero by default.
8. Global variables are stored in the data segment of memory.
9. We cannot declared many variables with the same name.

*/
