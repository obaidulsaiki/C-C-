#include<stdio.h>
void main()
{
    int a,b;
    int sum ,substr, multiplies, modulus;
    float divides;
    scanf("%d %d",&a ,&b);
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
