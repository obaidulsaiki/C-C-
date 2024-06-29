#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,x,discriminant,root1,root2;
printf("Input values of a, b and c:");
scanf("%f %f %f",&a,&b,&c);
discriminant=b*b-4*a*c;
if(a==0&&b==0)
printf("No solution\n");
else if(a==0)
{
x=-(c/b);
printf("x=%f",x);
}
else if(discriminant<0)
printf("Roots are imaginary\n");
else
{
root1=-b+sqrt(discriminant)/2*a;
root2=-b-sqrt(discriminant)/2*a;
printf("Root1=%f Root2=%f",root1,root2);
}
}
