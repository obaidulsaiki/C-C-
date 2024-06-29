#include<stdio.h>
int main()
{
    int day,month,year;
    printf("Enter the day:");
    scanf("%d",&day);
    printf("Enter the month:");
    scanf("%d",&month);
    printf("Enter the year:");
    scanf("%d",&year);
    printf("Date: %d/%d/%d\n",day,month,year);
    if(day<=31 && month<=12)
    {
        printf("The Date is Valid.");
    }
    else
    {
        printf("Not valid Date.");
    }
    
    return 0;
}