#include<stdio.h>
void main()
{
    int x ,y,a ,b,c;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    a= (x+y)/(x-y);
    b=(x+y)/2;
    c=(x+y)*(x-y);
    printf("(a)(x+y)/(x-y)=%d\n(b)(x+y)/2=%d\n(c)(x+y)*(x-y)=%d",a,b,c);
}
