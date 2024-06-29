#include<stdio.h>
void main()
{
int a,b,c,x,y,z;
printf("Input three integer values a b and c:");
scanf("%d%d%d",&a,&b,&c);
x=a*a;
y=b*b;
z=c*c;
if(a>b&&a>c&&(x==y+z))
printf("The values are sides of right-angled triangle");
else if(b>a&&b>c&&(y==x+z))
printf("The values are sides of right-angled triangle");
else if(c>a&&c>b&&z==x+y)
printf("The values are sides of right-angled triangle");
else
printf("The values are not sides of right-angled triangle");
}
