#include<stdio.h>
void main()
{
    int x,y;
    int sum ,substr, Product, modulus;
    float division;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    sum=x+y;
    substr= x-y;
    Product =x*y;
    division= (float)x/y;
    modulus= x%y;
    printf("Sum:%d\n",sum);
    printf("Difference:%d\n",substr);
    printf("Product:%d\n",Product);
    printf("Division:%f\n",division);

}
