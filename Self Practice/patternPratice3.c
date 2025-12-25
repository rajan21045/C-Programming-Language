/*
        *
      * *
    * * *
  * * * *
* * * * *
*/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= 5; j++) {
            if (j >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

printf("\n\n");
	for (i = 10; i >= 1; i--) {
        for (j = 1; j <= 10; j++) {
            if (j >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

