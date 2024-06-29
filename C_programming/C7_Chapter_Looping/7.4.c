#include<stdio.h>
#include<math.h>
void main()
{
int i,n,p,j;
double v,r,t;
r=0.10;
n=10;
p=1000;
t=pow((1+r),i);
 printf("\n\n%.6lf ",t);
printf("\nP\tR\tN\tV\n");
for(i=1;i<=n;i++)
{
    if(r<=0.20 && p<=10000)
{
t=pow((1+r),i);
v=p*t;
p=p+1000;
r=r+0.01;
}
printf("%d %f %d ",p,r,n);
printf("V=%f ",v);
printf("\n");
}

}
