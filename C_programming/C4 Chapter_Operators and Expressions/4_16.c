#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter the Number for type casting: ");
    scanf("%d",&a);
    b=(float)a;
    printf("Type casting with (float)%d = %.3f\n",a,b);
    return 0;
}