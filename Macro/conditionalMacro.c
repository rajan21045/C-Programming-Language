#include <stdio.h>

#define DEBUG

int main() {
    int x = 10;

    #ifdef DEBUG
        printf("Debug: x = %d\n", x);
    #endif

    printf("Program running...\n");
    return 0;
}

