#include<stdio.h>
void main ()
{
    int day ,month;
    printf("Enter the day:");
    scanf("%d",&day);
    month= day/30;
    day= day%30;
    printf("month= %d \nDay=%d",month, day);
}
