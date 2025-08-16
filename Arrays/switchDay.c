#include <stdio.h>
int main()
{
    int choice;
    printf("Choose 1 - 7 To Find Out The Day: \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nToday Is Sunday.");
        break;
    case 2:
        printf("\nToday Is Monday.");
        break;
    case 3:
        printf("\nToday Is Tuesday.");
        break;
    case 4:
        printf("\nToday Is Wednesday.");
        break;
    case 5:
        printf("\nToday Is Thursday.");
        break;
    case 6:
        printf("\nToday Is Friday.");
        break;
    case 7:
        printf("\nToday Is Saturday.");
        break;
        default:
        printf("You Have To Entered Between 1 - 7.");
    }

    return 0;
}
