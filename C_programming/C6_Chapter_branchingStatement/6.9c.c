#include<stdio.h>
void main()
{
float y,x;
printf("Input x\n");
scanf("%f",&x);
y=((x!=0 && x>0)?1:-1);
printf("%d",y);
}
