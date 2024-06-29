#include<stdio.h>
void main()
{
int m,x,y,n,z;
m=0;
x=0;
y=1;
printf("Input number of count:");
scanf("%d",&n);
printf("%d",y);
do{
z=x+y;
x=y;
y=z;
m++;
printf(" \nthe result= is %d\n",z);
}while(m<n);

}
