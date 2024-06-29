#include<stdio.h>
void main()
{
    int a=15, b=7;
    int sum ,substr, multiplies, modulus;
    float divides;
    sum=a+b;
    substr= a-b;
    multiplies =a*b;
    divides= (float)a/b;
    modulus= a%b;
    printf("Sum:%d\n",sum);
    printf("Sub:%d\n",substr);
    printf("multiples:%d\n",multiplies);
    printf("divides:%.3f\n",divides);
    printf("modulus:%d\n",modulus);

}
