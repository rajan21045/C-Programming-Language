#include<stdio.h>

int main() {
    int quan, choice, totalPrice;

    // Display welcome message and menu
    printf("Welcome To Nox Cafe........\n\n");
    printf("...........Menu............\n\n");
    printf("1. Tea          - Rs.15\n");
    printf("2. Coffee       - Rs.25\n");
    printf("3. Snacks       - Rs.15\n\n");

    // Take user input
    printf("Enter The Choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter The Quantity: ");
    scanf("%d", &quan);
	printf("\n");
    // Switch-case to calculate bill based on choice
    switch(choice) {
        case 1:
            totalPrice = 15 * quan;
            printf("You Have Chosen Tea(s).\n");
            printf("Your Total Bill Is: Rs. %d\n", totalPrice);
            break;

        case 2:
            totalPrice = 25 * quan;
            printf("You Have Chosen Coffee(s).\n");
            printf("Your Total Bill Is: Rs. %d\n", totalPrice);
            break;

        case 3:
            totalPrice = 15 * quan;
            printf("You Have Chosen Snack(s).\n");
            printf("Your Total Bill Is: Rs. %d\n", totalPrice);
            break;

        default:
            printf("Invalid Choice! Please select from the menu (1-3).\n");
    }

    printf("Thank you for visiting!\n");

    return 0;
}

