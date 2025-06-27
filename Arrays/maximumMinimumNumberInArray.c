#include<stdio.h>

int main(){
    int arr[] = {11, 22,2, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];
    // Finding the maximum number in the array
    // Start from index 1 since we have already initialized max and min with arr[0]
    printf("Array elements are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    // Finding the minimum number in the array
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Maximum number in the array is: %d\n", max);
    printf("Minimum number in the array is: %d\n", min);

}