#include<stdio.h>
void main()
{
float units,total,net;
char name;
printf("Input users name and units:");
scanf("%s %f",name,&units);
if(units<=200)
{

total=100+0.80*units;
}
else if(units<=300)
{
    total=100+0.90*units;
}

else if(units>300)
{
    total=100+1.00*units;
}

if(total>400)
{
net=total+total*0.15;
printf("%s=%f",net);
}
else
{
printf("Total=%f",total);
}
}

