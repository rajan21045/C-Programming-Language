    /*
    Write a program in C to add two 3*3 matrices and display result

    */

    #include <stdio.h>

    int main() {
        // Your code goes here
        int i,j,a[3][3],b[3][3],sum[3][3];

        printf("Matrix First \n");
        printf("Enter the Element In First Matrix[3][3] : \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < i; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        
        printf("Now, Matrix Second \n ");
        printf("Enter the Element In Second Matrix[3][3] : \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < i; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }

        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < i; j++)
            {
                sum[i][j] = a[i][j]+b[i][j];
            }
        }

        printf("Now, The Sum Of Two Matrices Is \n");
        for ( i = 0; i < 3; i++)
        {
        for (j = 0; j < 3; j++)
        {

            printf("%d",&sum[i][j]);
        }
        }
        

        
        return 0;
    }
