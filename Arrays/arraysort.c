#include <stdio.h>

int main() {
    int arr[100];  // Array to store the elements
    int n;  // Number of elements in the array
    int i, j, temp;  // Loop variables and temporary variable for swapping
    // Your code goes here
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);  // Read the number of elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read each element into the array
    
    }
    // Sort the array using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {  // Compare adjacent elements
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print each element
    }
    return 0;
}