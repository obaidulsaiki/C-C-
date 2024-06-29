#include<stdio.h>
int main()
{
    int a,sum=0,div=0;
    printf("Enter the Number: ");
    scanf("%d",&a);
    while (a>0)
    {
        div=a%10;
        sum=sum+div;
        a=a/10;
    }
    printf("The Sum of 4 digits number: %d",sum);    
    return 0;
}