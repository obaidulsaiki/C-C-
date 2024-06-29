#include<stdio.h>
int main()
{
    float a,b,c, x,y;
    float sum=0,average=0;
    printf("Enter three Number: ");
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;
    average=sum/3;
    printf("a) Sum of the Values: %f\n",sum);
    printf("b) Average of the Values: %f\n",average);
    x=(a>b)?a:b;
    y=(x>c)?x:c;
    printf("c) Largest Number: %f\n",y);
    x=(a<b)?a:b;
    y=(x<c)?x:c;
    printf("d) Smallest Number: %f\n",y);
    return 0;

}