#include<stdio.h>
void main ()
{
    int n, i;
    printf("Enter the number till:");
    scanf("%d",&n);
    printf("Odd number 1 to %d are:\n",n);
    for(i=1;i<=n; i++)
    {
        if(!(i%2==0))
        {
            printf("%d\n",i);
        }
    }

}
