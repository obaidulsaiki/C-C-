#include<stdio.h>
void main ()
{
    float x,y, milage;
    printf("Enter the distance km:");
    scanf("%f",&x);
    printf("Enter the fuel consumed l:");
    scanf("%f",&y);
    milage = x/y;
    printf(" milage %f km/l",milage);
}
