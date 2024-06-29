#include<stdio.h>
#define PI 3.1416
int main()
{
    int r;
    float p;
    printf("Enter the radius: ");
    scanf("%d",&r);
    p=2*PI*r;
    printf("Circumstanse of a Circle:%f",p);
    return 0;
}
