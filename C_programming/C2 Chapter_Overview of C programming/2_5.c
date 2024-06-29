#include<stdio.h>
void main()
{
    int distance, time;
    float velocity;

    printf("Enter the distance:");
    scanf("%d",&distance);
    printf("Enter the time:");
    scanf("%d",&time);
    velocity= (float)distance/time;
    printf("the speed was %.2f",velocity);

}
