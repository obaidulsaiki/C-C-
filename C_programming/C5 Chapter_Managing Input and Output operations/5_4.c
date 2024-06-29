#include<stdio.h>
void main ()
{
    float a1,a2,a3,a4;
    int x, y, z, t ,i;
    printf("Enter 4 float numbers:");
    scanf("%f %f %f %f", &a1,&a2,&a3,&a4);
    x=a1+0.5;
    y=a2+0.5;
    z=a3+0.5;
    t=a4+0.5;
    printf("the horizontal bar chard is :\n");
    for (i=0;i<x;i++)
        {
            printf("*");
        printf("%.2f\n",a1);
        }
    for (i=0;i<y;i++)
        printf("*");
        printf("%.2f\n",a2);
    for (i=0;i<z;i++)
        printf("*");
        printf("%.2f\n",a3);
    for (i=0;i<t;i++)
        printf("*");
        printf("%.2f\n",a4);


}
