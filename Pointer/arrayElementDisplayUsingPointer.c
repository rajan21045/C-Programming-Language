#include<stdio.h>
int main(){
	
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr;
	ptr = arr;
	int i;
	printf("\n ....Displaying Array Elements.... \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d \t", *ptr);
		ptr++;
	}
	
	return 0;
}
