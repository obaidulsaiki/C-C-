#include<stdio.h>
void main()
{
int code,call;
float bill;
printf("Enter customer code : ");
scanf("%d",&code);
printf("Enter Number of calls Made: ");
scanf("%d",&call);
bill=250+(call*1.25);
printf("Customer code: %d\nBill: %f",code,bill);
}