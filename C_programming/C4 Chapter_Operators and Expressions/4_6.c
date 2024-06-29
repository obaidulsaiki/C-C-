#include<stdio.h>
int main()
{
    float u=0,t,a,distance;
    printf("Enter the time: ");
    scanf("%f",&t);
    printf("Enter the Acceleration: ");
    scanf("%f",&a);
    distance=u*t +0.5*a*t*t;
    printf("The distance is %f km: ",distance);
    return 0;
}