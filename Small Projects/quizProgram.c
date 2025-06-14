#include <stdio.h>

int main() {
    // Declare variables to store answers and total score
    int a1, a2, a3, a4, a5, a6, a7;
    int total;
    int n;

    // Initial greeting and option to enter or exit
    printf("Welcome To Quiz Program...\n");
    printf(">> Press 7 To Enter The Program...\n");
    printf(">> Press 0 To Exit The Program...\n");

    scanf("%d", &n);  // Take user input to enter or exit
    
    if (n == 7) {
        // User chose to enter the quiz
        printf("Thank you..\n\n");

        // Question 1
        printf("Q1. What is the full form of PDF?\n");
        printf("1. Printable Data File\t\t2. Public Document Format\n3. Portable Document Format\t4. Personal Document File\n");
        scanf("%d", &a1);

        if (a1 == 3) {
            // Correct answer for Q1
            printf("\nYou Have Entered The Correct Answer\n");
            a1 = 10;  // Assign points
        } else {
            printf("\nYou Have Entered The Wrong Answer\n");
            a1 = 0;
        }

        // Question 2
        printf("\nQ2. What does URL stand for?\n");
        printf("1. Uniform Resource Locator\t2. Unique Reference Link\n3. Unified Resource Login\t4. Universal Routing Link\n");
        scanf("%d", &a2);

        if (a2 == 1) {
            printf("\nYou Have Entered The Correct Answer\n");
            a2 = 10;
        } else {
            printf("\nYou Have Entered The Wrong Answer\n");
            a2 = 0;
        }

        // Question 3
        printf("\nQ3. Which protocol is used to send emails?\n");
        printf("1. HTTP\t\t2. FTP\n3. SMTP\t\t4. SNMP\n");
        scanf("%d", &a3);

        if (a3 == 3) {
            printf("\nYou Have Entered The Correct Answer\n");
            a3 = 10;
        } else {
            printf("\nYou Have Entered The Wrong Answer\n");
            a3 = 0;
        }

        // Question 4
        printf("\nQ4. Which one is a type of non-volatile memory?\n");
        printf("1. RAM\t\t2. ROM\n3. Cache\t\t4. Register\n");
        scanf("%d", &a4);

        if (a4 == 2) {
            printf("\nYou Have Entered The Correct Answer\n");
            a4 = 10;
        } else {
            printf("\nYou Have Entered The Wrong Answer\n");
            a4 = 0;
        }

        // Question 5
        printf("\nQ5. Which company developed the Windows operating system?\n");
        printf("1. Apple\t\t2. Google\n3. Microsoft\t\t4. IBM\n");
        scanf("%d", &a5);  

        if (a5 == 3) {
            printf("\nYou Have Entered The Correct Answer\n");
            a5 = 10;
        } else {
            printf("\nYou Have Entered The Wrong Answer\n");
            a5 = 0;
        }
        
        // Question 6
        printf("\nQ6. In binary, what is the value of (1011)2 in decimal?\n");
        printf("1. 10\t\t2. 11\n3. 12\t\t4. 13\n");
        scanf("%d", &a6);  

        if (a6 == 2) {
            printf("\nYou Have Entered The Correct Answer\n");
            a6 = 10;
        } else {
            printf("\nYou Have Entered The Wrong Answer\n");
            a6 = 0;
        }
        
        // Question 7
        printf("\nQ7. Which of the following is an input device?\n");
        printf("1. Monitor\t\t2. Printer\n3. Speaker\t\t4. Mouse \n");
        scanf("%d", &a7);  

        if (a7 == 4) {
            printf("\nYou Have Entered The Correct Answer\n");
            a7 = 10;
        } else {
            printf("\nYou Have Entered The Wrong Answer\n");
            a7 = 0;
        }

        // Calculate total score
        total = a1 + a2 + a3 + a4 + a5 + a6 + a7;

        // Display total score
        printf("\nYou Have Won %d Points.\n", total);

    } else {
        // User chose to exit the quiz
        printf("\nYou Have Exited The Quiz Program..\n");
    }


    return 0;
}

