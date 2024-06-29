#include<stdio.h>
void add();
void sub();
void multi();
void transpose();
void main ()
{
    printf("the additon of matrix A and B:\n");
    add();
    printf("the substruction of matrix A and B:\n");
    sub();
    printf("the multiplication of matrix A and B:\n");
    multi();
    printf("the transpose of matrix A and B:\n");
    transpose();
}
void add ()
    {
        int A[5][5],B[5][5],C[5][5];
        int i, j;
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
        printf("C (Addition of A and B):\n ");
    for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("%d\t",C[i][j]=A[i][j]+B[i][j]);
            }
            printf("\n");
        }
    }
void sub()
    {
        int A[5][5],B[5][5],C[5][5];
        int i, j;
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
        printf("C ( substruction of A and B):\n ");
        for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("%d\t",C[i][j]=A[i][j]-B[i][j]);
            }
            printf("\n");
        }
    }
void multi()
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
     void transpose()
     {
         {
        int A[5][5],B[5][5],C[5][5];
        int i, j;
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
        printf("C (addition of A and B):\n ");
    for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("%d\t",C[i][j]=A[i][j]+B[i][j]);
            }
            printf("\n");
        }
        printf("Transpose of C:\n");
    for(i=1;i<3;i++)
        {
            for(j=1;j<3;j++)
            {
                printf("%d\t",C[j][i]);
            }
            printf("\n");
        }
    }
     }
