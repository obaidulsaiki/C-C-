#include<stdio.h>
void main()
{
    int mod, reverse=0,n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=n;
        while(n!=0)
        {
            mod=n%10;
            reverse= reverse*10+mod;
            n=n/10;
        }
    if(a==reverse)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number isn't palindrome");
    }
}
