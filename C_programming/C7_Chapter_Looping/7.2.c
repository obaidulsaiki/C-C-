#include<stdio.h>
void main()
{
long int n,b,sum=0;
printf("\nInput number:");
scanf("%d",&n);
while(n>10)
{

b=n%10;
n=n/10;
sum+=b;
}
sum+=n;
printf("\nthe result is= %d",sum);}
