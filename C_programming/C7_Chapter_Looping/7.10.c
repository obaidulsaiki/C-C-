#include<stdio.h>
float fact(float i)
{
float f=1;
int k;
for(k=1;k<=i;k++)
f*=k;
return(f);
}
void main()
{
float e,a,b,d=1,temp;
int i,j,k;
e=1;i=2;b=1;
while(d>=0.00001)
{
temp=fact(i);
a=1/temp;
e=e+a;
d=b-a;
if(d>=0.00001)
b=a;
i++;
}
printf("\n\nthe result = %f",e);

}
