#include <stdio.h>
int fact(int n)
{
 if(n==0)
 {
   return 1;
 }
 return fact(n-1)*n;
}

int main(void)
 {
     int number,factorial ;
 printf("Enter a number to calculate it's factorial:");
  	scanf("%d",&number);
  	factorial= fact(number);
    printf("Factorial of the num(%d) = %d\n",number,factorial);
}
