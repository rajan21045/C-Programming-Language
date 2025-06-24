#include <stdio.h>

int main() {
    int choice;
    int num1, num2, add, sub, prod, div;

    printf("Hey\nHere Is The Menu For Calculation\n\n");
    printf("1. Addition\n2. Subtraction\n3. Product\n4. Division\n\n");

    printf("Now\nEnter Your Choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
        	
            printf("\nEnter Two Numbers: ");
            scanf("%d%d", &num1, &num2);
            add = num1 + num2;
            printf("The Addition of %d and %d is %d", num1, num2, add);
            break;

        case 2:
            printf("\nEnter Two Numbers: ");
            scanf("%d%d", &num1, &num2);
            if (num1 < num2) {
                printf("%d is less than %d. Cannot subtract.", num1, num2);
            } else {
                sub = num1 - num2;
                printf("The Subtraction of %d and %d is %d", num1, num2, sub);
            }
            break;

        case 3:
            printf("\nEnter Two Numbers: ");
            scanf("%d%d", &num1, &num2);
            prod = num1 * num2;
            printf("The Product of %d and %d is %d", num1, num2, prod);
            break;

        case 4:
            printf("\nEnter Two Numbers: ");
            scanf("%d%d", &num1, &num2);
            if (num2 == 0) {
                printf("Cannot divide by zero.");
            } else {
                div = num1 / num2;
                printf("The Division of %d by %d is %d", num1, num2, div);
            }
            break;

        default:
            printf("Sorry, you must enter a choice between 1 and 4.");
    }

    printf("\n\nThank You\n");
    return 0;
}

