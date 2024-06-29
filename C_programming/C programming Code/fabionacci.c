#include<stdio.h>
void main()
{
    int first_number=0,second_number=1,fibonacci=0,number,count=0;
    printf("enter the total number to be print:");
    scanf("%d",&number);
    while(fibonacci<=number)
    {
       if(count<=1)
       {
           fibonacci=count;
       }
       else
       {
           fibonacci=first_number+second_number;
           first_number=second_number;
           second_number=fibonacci;


       }
         printf(" %d",fibonacci);
         count++;
    }

 count++;
}
