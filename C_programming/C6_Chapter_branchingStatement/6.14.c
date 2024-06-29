#include<stdio.h>
void main()
{
int i,j,count;
printf("\nSeries of prime number from 100 to 200:\n");
for(i=100;i<=200;i++)
{
for(j=2;j<=i;j++)
{
if(i%j==0)
break;
}
if(i==j)
{
printf("%4d\n",i);
count+=1;
}
}
printf("The countable number is: %d",count);
}
