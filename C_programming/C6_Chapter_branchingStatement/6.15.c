#include<stdio.h>
#include<math.h>
#include<ctype.h>
void main()
{
    int x,c=2,s=1,d,t=3;
float r,result;
printf("Input the value of x and character value:");
scanf("%d",&x);
r=x*(180/3.1416);
scanf("%d",&d);
{
if(d==1)
result=sin(r);
else if(d==2)
result=cos(r);
else if(d==3)
result==tan(r);

else
printf("no response.");
}
printf("\n%f",result);
}
