#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Three side of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && b==c && a==c)
    {
        printf("The Triangle is isocales.");
    }
    else
    {
        printf("The Triangle isnot isocales.");

    }
    
}