#include<stdio.h>
void main()
{
int i,j,count,n;
count=0;
printf("\nHow many rows of Floyd triangle: ");
scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
            count++;
            printf("%d",count);
            printf(" ");
            }
        printf("\n");
    }
}
