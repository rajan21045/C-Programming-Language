#include<stdio.h>
int main(){
	
	int i,n,arr[20],max;
	
	printf("Enter The Number Upto Which Element Should Be: ");
	scanf("%d",&n);
	
	printf("Enter The Element: ");
	for(i =0; i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	max = arr[0];
	for(i =0; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
						}
	}
	
	printf("Largest Element In The Array Is %d",max);
	
	return 0;
}
