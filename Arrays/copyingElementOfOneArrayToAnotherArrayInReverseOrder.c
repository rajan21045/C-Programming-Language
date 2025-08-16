#include<stdio.h>
int main(){
	
	int arr[5], a[5],i,j,n;
	
	printf("Enter The Array Size: \n");
	scanf("%d",&n);
	
	printf("\nEnter The Enter In The Array: \n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	i=0;
	for(j=n-1; j>=0; j--){
		a[j]= arr[i];
		i++;
	}
	
	printf("\n");
	printf("Original Array:\n");
	for(i=0;i<n; i++){
		printf("%d\t", arr[i]);
	
	}
	printf("\n");
	printf("\nReverse Array:\n");
	for(i=0;i<n;i++){
		printf("%d\t", a[i]);
	}
	
	return 0;
}
