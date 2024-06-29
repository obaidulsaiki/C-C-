#include<stdio.h>
void main()
{
    int years , days, weeks;
    printf("Enter the number of days:");
    scanf("%d",&days);
    years =days /365;
    weeks = (days%365)/7;
    days= days%(365%7);
    printf("%d years- %d weeks- %d days", years,weeks,days);
}
