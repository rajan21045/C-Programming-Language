#include<stdio.h>
int main(){
	
	int time;
	float principal, rate;
	float SI;
	
	printf("Enter The Principal, Time, Rate To Find The Simple Interest: ");
	scanf("%f %d %f", &principal,&time,&rate);
	
	SI = (principal*time*rate)/100;
	
	printf("The Simple Interest For %f amount with %d time and %f rate Is %f", principal,time,rate,SI);
	
	
	return 0;
	
}
