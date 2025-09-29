#include<stdio.h>
void collatzConjecture(int n){
	while(n != 1){
		printf("%d -> \t", n);
		if(n %2 ==0){
			n = n/2;
		} else{
			n = 3*n+1;
		}
	}
	printf("1\n");
}
int main(){
	int n;
	printf("Enter A Number: ");
	scanf("%d",&n);
	
	if(n<1){
		printf("Please Entered More Than 1.");
	} else{
		collatzConjecture(n);
	}
}
