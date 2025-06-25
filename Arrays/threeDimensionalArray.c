#include<stdio.h>
int main()
{
	int i,j,k;
	int a[3][3][3];
	
	printf ("Hey,\nEnter The Element For First Matrix: \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			for(k=0; k<3; k++){
				scanf("%d", &a[i][j][k]);
			}
		}
	}
	
	
//	printf ("Hey,\nEnter The Element For Second Matrix: ");
//	for(i=0; i<3; i++){
//		for(j=0; j<3; j++){
//			for(k=0;k<3; k++){
//				scanf("%d", &b[i][j][k]);
//			}
//		}
//	}
//	
//	printf ("Hey,\nEnter The Element For First Matrix: ");
//	for(i=0; i<3; i++){
//		for(j=0; j<3; j++){
//			for(k=0;k<3; k++){
//				scanf("%d", &c[i][j][k]);
//			}
//		}
//	}
	
	printf("\nThe 3D Matrix is:\n \n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			for(k=0;k<3; k++){
				printf("%d ",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	
	return 0;
	
}
