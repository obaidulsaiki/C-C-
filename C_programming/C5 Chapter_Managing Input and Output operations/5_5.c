#include<stdio.h>
void main ()
{
    int a ,b,c,p,pro;
    printf("Enter the 2 digit integer number a:");
    scanf("%d", &a);
    printf("Enter the 2 digit integer number b:");
    scanf("%d", &b);
    printf("\t%4d\n\tx%3d\n",a,b);
    printf("\t-------------------\n");
    p=b/10;
    c=b%10;
    pro=a*b;
    printf("%dx %d is %6d\n",c,a,c*a);
    printf("%dx %dis %5d\n",p,a,p*a);
    printf("\t-------------------\n");
    printf("product=%d",pro);

}
