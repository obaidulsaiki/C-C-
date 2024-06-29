#include<stdio.h>
#include<math.h>
int main()
{
float L,R,C,Frequency;
printf("Enter the value of Inductance L:");
scanf("%f",&L);
printf("Enter the value of Resistance R:");
scanf("%f",&R);
printf("Enter the Value of Capacitance C:");
scanf("%f",&C);
Frequency=sqrt((1/L*C)-(R*R/4*C*C));
printf("The Frequency: %f",Frequency);
return 0;
}