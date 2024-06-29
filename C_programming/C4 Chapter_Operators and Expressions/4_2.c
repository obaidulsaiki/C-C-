#include<stdio.h>
int main()
{
    float a;
    int b=0,temp=0;
    printf("Enter the Number: ");
    scanf("%f",&a);
    b=(int)a;
    temp=b%100;
    printf("The right most part of int : %d",temp); 

    return 0;
}