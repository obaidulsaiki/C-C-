#include<stdio.h>
int main()
{
    float a,b,c;
    float x;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);
    x=a-b/3+c*2-1;
    printf("X = %f",x);
    return 0;
}