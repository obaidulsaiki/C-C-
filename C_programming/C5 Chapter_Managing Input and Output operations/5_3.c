#include<stdio.h>
void main()
{
    int p,i;
    float a;
    printf("enter real number for get nearest integer number\n");
    for(i=1;i<=4;i++)
    {
    scanf("%f",&a);
    if(a>=0)
    {
         p=a+0.5;
    }
    else
    {
        p=a-0.5;
    }
    printf("\nnearest integer number of %f is= %d\n",a,(int)p);
}
}
