/*

Sort an Array Using Pointers Only: 
Sort an integer array in ascending order without using array indexing (use only pointer arithmetic).


*/


#include<stdio.h>
int main(){
	int arr[] = {1,2,6,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	sortArr(arr,n);
	printArr(arr, n);
}

void sortArr(int *arr, int n){
	int i,j,temp;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1-i; j++){
			if(*(arr+ j)> *arr +j+1 ){
				temp = * (arr + j);
				*(arr+j) = *(arr +j+1);
				*(arr+ j+1) = temp; 
			}
		}
	}
}


void printArr(int *arr, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", *(arr+ i));
	}
}

