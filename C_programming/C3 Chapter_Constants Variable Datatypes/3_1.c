#include<stdio.h>
void main ()
{
   int i;
   float sum=1 ,n;
    printf("Enter the value of n: ");
   scanf("%f",&n);
   for (i=1;i < n; i++)
   {
      sum=sum+1/(float)i;
   }
   printf("the Sum of harmornic series: %f",sum);

   

}
