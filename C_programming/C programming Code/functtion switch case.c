#include<stdio.h>
void add();
void sub();
void multi();
void transpose();
int main()
{
    int a;
       printf("Enter 1 for matrix addition\n");
        printf("Enter 2 for matrix substraction\n");
         printf("Enter 3 for matrix Multiplication\n");
          printf("Enter 4 for matrix transpose\n");
    printf("Enter the number:");
    scanf("%d",&a);

    switch(a)
    {


        case 1:
         add();
        case 2:
         sub();
        case 3:
         multi();
        case 4:
         transpose();
        default :
         printf(" wrong number: type 1,2 ,3 or 4 to get the right number");
     }

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
        printf("Input number for B matrix\n");
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
