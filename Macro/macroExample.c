#include <stdio.h>
#define PI 3.1415

int main() {
    float r, area, circ;

    printf("Enter the radius: ");
    scanf("%f", &r);

    area = PI * r * r;
    circ = 2 * PI * r;

    printf("The circumference is: %.2f\n", circ);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}

