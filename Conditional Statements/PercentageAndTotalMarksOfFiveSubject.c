/*

WAP in c to read 5 subject marks and calculate percentage as follows if passed ( passed marks is 35 and full mark is 100).

1. percentage >=80, Distinction
2. percentage >=60 	& percentage < 80, First Division
3. percentage >=45, & percentage < 60, First Division
4. percentage >=35, & percentage < 45, First Division
5. Otherwise Fail
 
*/

#include<stdio.h>
int main(){
	
	float m1,m2,m3,m4,m5,percentage,total_marks;
	
	printf("Hey,\nEnter The Marks Of 5 Subject: ");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
		
	if(m1<35 ||m2<35 ||m3<35 ||m4<35 ||m5<35){
		printf("You Have Scored Less Than 35 Marks(Passing Marks). So, You Have Failed The Exam.");
	}
	else{
		total_marks = m1+m2+m3+m4+m5;
		percentage = (total_marks/500)*100;
		
		printf("You Have Scored %.2f percentage. \n",percentage);
		printf("And Your Total Marks Is %.2f. \n",total_marks);
	}
	
	if(percentage>=80){
		printf("Congratulations, You Have Got Distination.");
	} else if(percentage>=60 && percentage<80 ){
		printf("Congratulations, You Have Got First Division.");
	}else if(percentage>=45 && percentage<60 ){
		printf("Congratulations, You Have Got Second Division.");
	}else if(percentage>=35 && percentage<45 ){
		printf("Congratulations, You Have Got Third Division.");
	} else{
		printf("Sorry, You Have Scored Less Than 35 Marks.");
	}
	
	return 0;
}

