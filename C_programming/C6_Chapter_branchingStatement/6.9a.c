#include<stdio.h>
void main()
{
float x,y;
printf("Input x\n");
scanf("%f",&x);
if(x!=0)
{
if(x>0)
printf("y=1");
if(x<0)
printf("y=-1");
}
if(x==0)
printf("y=0");
}
