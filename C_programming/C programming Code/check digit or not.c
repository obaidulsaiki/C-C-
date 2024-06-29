#include<stdio.h>
void main ()
{
    int lol, result; //srsp is a variable
    printf("Enter the number:");
    scanf("%d",&lol);
    result = (lol>=0 && lol<=9);
    printf("%d", result );
}
