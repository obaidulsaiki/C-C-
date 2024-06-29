#include<stdio.h>
void main()
{
int n,i,j,mid;
printf("Enter the side value of a square:");
scanf("%d",&n);
mid=(int)(n/2);
for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(i==mid&&j==mid)
        printf("0 ");
        else
        printf("s ");

    }
    printf("\n");
}
}
