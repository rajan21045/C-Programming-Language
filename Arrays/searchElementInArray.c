#include<stdio.h>
int main(){
	int i,n,arr[20],key,flag;
	printf("Enter The Number Upto Which Element Should Be: ");
	scanf("%d",&n);
	
	printf("Enter The Element: ");
	for(i =0; i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	
	printf("Enter The Key Element: ");
	scanf("%d",&key);
	
	for(i=0; i<n; i++){
		if(arr[i]==key){
			flag =1;
			break;
		}
	}
	
	if(flag==1){
		printf("Element Found");
	} else{
		printf("Element Not Found");
	}
	return 0;
}
