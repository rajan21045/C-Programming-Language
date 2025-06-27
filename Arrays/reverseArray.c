#include <stdio.h>

int main(){

    int arr[] = {1, 33, 44,1893, 100, 2, 3, 4, 5};
    int temp;
    int i,j;
     int n = sizeof(arr) / sizeof(arr[0]);
     int l=0;
     int r=n-1;
        printf("Array elements are: \n");
        for(i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
     while(l<r){
         temp = arr[l];
         arr[l] = arr[r];
         arr[r] = temp;
         l++;
         r--;
     }
        printf("\n");
        printf("\n");
     printf("Reversed array is: \n");
     for(int i=0; i<n; i++){

            printf("%d ", arr[i]);
        }
        printf("\n");
    return 0;
}