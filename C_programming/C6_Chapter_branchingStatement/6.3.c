#include<stdio.h>
void main()
{
float a,b,c,d,m,n;
float x1,x2;
printf("Input a,b,c,d,m,n:");
scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
x1=(m*d-b*n)/(a*d-c*b);
x2=(n*a-m*c)/(a*d-c*b);
if((a*d-c*b)!=0)
printf("x1=%f x2= %f",x1,x2);
else
printf("The value is infinity.\n");
}
