#include<stdio.h>
#define mc1 0
#define mc2 0.05
#define mc3 0.075
#define mc4 0.10
#define ht1 0.05
#define ht2 0.075
#define ht3 0.10
#define ht4 0.15
void main ()
{
    float price,discount, net_price;
    int level;
printf("price: ");
scanf("%f",&price);
if(0<=price && price<=100)
{
  level=price/100;
   printf("level=%d\n",level);
}
else if(101<=price && price<=200)
{
   level=price/100;
 printf("level=%d\n",level);
}
else if(201<=price && price<=300)
{
level=price/100;
  printf("level=%d\n",level);
}
else
{
   level=price/100;
 printf("level=%d\n",level);
}
   switch(level)
   {
       case 0:
       {
           discount=mc1+ht1;
           printf("Discount:%f\n",discount);
           break;
       }
       case 1:
       {
            discount=mc2+ht2;
            printf("Discount:%f\n",discount);
            break;
       }
       case  2:
       {
            discount=mc3+ht3;
            printf("Discount:%f\n",discount);
            break;
       }
       case 3:
       {
            discount=mc4+ht4;
            printf("Discount:%f\n",discount);
            break;
       }
       default:
       {
           printf("ERROR in level code\n");
       }

   }
   net_price=price-(price*discount);
printf("Net amount=%f\n",net_price);
}



