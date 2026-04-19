#include <stdio.h>
int sumNaturalNumbers(int num);
int factorial(int n);
void printNumber(int n1);
int fibonacci(int n2);
int main()
{

    /*
    Q. Sum of N natural numbers
    Input: n
    Output: 1 + 2 + ... + n
    */
    int num;
    printf("Enter The Number: ");
    scanf("%d", &num);

    int result = sumNaturalNumbers(num);
    printf("%d", result);

    /*
    Q. Factorial of a number
    Classic base-case understanding
    */
    printf("\n");
    int fact = factorial(5);
    printf("%d", fact);

    /*
    Q. Print numbers (1 to N and N to 1)
    Helps visualize call stack flow
    */
    printf("\n");
    printNumber(5);
    
    /*
    Q. Fibonacci (recursive)
    Then analyze why it’s inefficient
    */
   printf("\n");
   int n2 = 5;
   for(int i=0; i<n2; i++){
        printf("%d ", fibonacci(i));
   }

    return 0;
}

int sumNaturalNumbers(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num + sumNaturalNumbers(num - 1);
    }
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

void printNumber(int n1)
{
    if (n1 == 0)
        return;

    printNumber(n1 - 1);
    printf("%d ", n1);
}

int fibonacci(int n2){
    if(n2 <=1){
        return n2;
    }else{
        return fibonacci(n2-1) + fibonacci(n2 -2);
    }
}