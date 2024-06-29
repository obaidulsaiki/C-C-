#include<stdio.h>
#include<math.h>
#define p1 3.1416
#define MAX 180
void main()
{
int i;
float x,y,z;
i=0;
printf("x(degree) sin(x) cos(x)\n");
while(i<=MAX)
{
x=(p1/MAX)*i;
y=sin(x);
z=cos(x);
printf("Degree\t Sin(x)\t\tos(x)\n");
printf("%d\t %f\t %f\n",i,y,z);
i=i+15;
}
}