#include<stdio.h>
int main()
{
    int a, b,c,x,y;
    printf("Enter three Number: ");
    scanf("%d%d%d",&a,&b,&c);
    x=(a>b)?a:b;
    y=(x>c)?x:c;
    printf("the largest Number: %d",y);

}