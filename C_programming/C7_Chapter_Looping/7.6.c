#include<stdio.h>
void main()
{
int total,age,count=0,i;
printf("enter total number of persons:");
scanf("%d",&total);
printf("enter age of persons:");
for(i=1;i<=total;i++)
   {
      scanf("%d",&age);
           if(age>=50 && age<=60)
               {
                 count=count+1;
               }
    }
printf("\ntotal number of person in the age group between 50 to 60 :=%d",count);
}
