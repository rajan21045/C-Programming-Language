/*
	* * * * *
	  * * * *
		* * *
		  * *
		    *

*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i<=5; i++) {
        for (j = 1; j<=5; j++) {
            if (j <i) {
                printf("  ");
            } else {
                printf(" *");
            }
        }
        printf("\n");
    }
    

printf("\n\n");
	for (i = 1; i<=10; i++) {
        for (j = 1; j<=10; j++) {
            if (j <i) {
                printf("  ");
            } else {
                printf(" *");
            }
        }
        printf("\n");
    }
printf("\n\n");
	for (i = 1; i<=20; i++) {
        for (j = 1; j<=20; j++) {
            if (j <i) {
                printf("  ");
            } else {
                printf(" *");
            }
        }
        printf("\n");
    }
    return 0;
}

