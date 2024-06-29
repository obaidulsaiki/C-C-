#include<stdio.h>
void main()
{
int i,count;
count=0;
for(i=0;i<=100;i++)
{
if(i%6==0 && i%4!=0)
{
count=count+1;
printf(" %d",i);
}
}
printf("\ncount=%d",count);
}
