#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two number a & b:  ");
    scanf("%d %d",&a,&b);
    if (a%b==0)
    {
        printf("Division possible.");
    }
    else
    {
        printf("Division not Possible!!!!");
    }
    return 0;   
   
}