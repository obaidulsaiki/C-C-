#include<stdio.h>
#define pi 3.14
void main()
{
    float area, radius, perimeter;
    scanf("%f", &radius);
    printf("enter the value of radius\n");
    area = radius*radius*pi;
    perimeter = 2*pi*radius;
    printf("area:%.2f\n",area);
    printf("perimeter:%.2f\n",perimeter);
}
