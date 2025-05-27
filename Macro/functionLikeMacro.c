#include <stdio.h>
#define SQUARE(x) ((x)*(x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    printf("Square of 5: %d\n", SQUARE(5));
    printf("Max of 10 and 20: %d\n", MAX(10, 20));
    return 0;
}

