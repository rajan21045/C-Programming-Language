#include<stdio.h>

int main(){
    int arr[50], even[50], odd[50];  // arrays for input, even numbers, odd numbers
    int i, j=0, k=0, n;              // j = count of even, k = count of odd

    // Ask user how many numbers to enter
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input n elements in the array
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // Separate even and odd elements
    for(i=0; i<n; i++){
        if(arr[i] % 2 == 0){      // check if even
            even[j] = arr[i];
            j++;                  // increase even count
        } else {                  // otherwise odd
            odd[k] = arr[i];
            k++;                  // increase odd count
        }
    }

    // Print even elements
    printf("Even elements: ");
    for(i=0; i<j; i++){
        printf("%d\t", even[i]);
    }

    // Print odd elements
    printf("\nOdd elements: ");
    for(i=0; i<k; i++){
        printf("%d\t", odd[i]);
    }

    return 0;
}

