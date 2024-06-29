#include<stdio.h>
void main()
{
        int A[5][5],B[5][5],C[5][5];
        int i, j,k;
        printf("Input number for A matrix:\n");
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("A[%d][%d]=",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        printf("\nInput number for B matrix\n");
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("B[%d][%d]=",i,j);
                scanf("%d",&B[i][j]);
            }
        }
         printf("A matrix:\n");
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("%d\t",A[i][j]);
            }
            printf("\n");
        }
         printf("B matrix:\n");
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("%d\t",B[i][j]);
            }
            printf("\n");
        }
        printf("C ( multiplication of A and B):\n ");
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
               C[i][j]=0;
                for(k=1;k<3;k++)
                {
                 C[i][j]=C[i][j]+A[i][k]*B[k][j];
                }
            }
        }
         for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("%d\t",C[i][j]);
            }
            printf("\n");
        }
}
