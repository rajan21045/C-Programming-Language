#include <stdio.h>
int main()
{
    /*
    Arrays
        Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
        To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
        To insert values to it, use a comma-separated list inside curly braces, and make sure all values are of the same data type:
    */
   int myArray[] = {1, 2, 3, 4};   
   //We have now created a variable that holds an array of four integers.

   /*
    Access the Elements of an Array
        To access an array element, refer to its index number.
        Array indexes start with 0: [0] is the first element. [1] is the second element, etc.
        This statement accesses the value of the first element [0] in myNumbers:
   */
    printf("%d", myArray[0]);
    // Output: 1
  
    //Change an Array Element
    // To change the value of a specific element, refer to the index number:
    myArray[1] = 12;
    printf(" ");
    printf("%d", myArray[1]);

    //Set Array Size
    // Another common way to create arrays, is to specify the size of the array, and add elements later:
    int myNum[4];
    myNum[0] = 12;
    myNum[1] = 13;
    myNum[2] = 14;
    myNum[3] = 15;
    // Using this method, you should know the number of array elements in advance, in order for the program to store enough memory.
    // You are not able to change the size of the array after creation.
    int size = sizeof(myNum)/sizeof(myNum[0]);
    printf("\n");
    for(int i=0; i<size; i++){
        printf("%d\t", myNum[i]);
    }

    return 0;
}