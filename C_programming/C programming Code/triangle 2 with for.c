#include<stdio.h>
void main()
{
    int i ,j, a;
    for(i=1;i<=4;i++)
    {
        a=5;
        for(j=1;j<=i;j++)
        {

            printf("%d ",a);
            a=a+5;
        }

        printf("\n");

    }
}

