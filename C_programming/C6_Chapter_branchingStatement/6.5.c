#include<stdio.h>
void main ()
{
    int phy ,math,chem,sum;
    printf("Number of math, physics,chemistry:");
    scanf("%d%d%d",&phy,&math,&chem);
    sum=phy +math+chem;
    printf("sum :%d\n",sum);
    if(math>=60 && phy>=50 && chem>=40 && sum>=200||math+phy>=150)
    printf("the candidate is eligible");
    else
    printf("the candidate is not eligible");


}
