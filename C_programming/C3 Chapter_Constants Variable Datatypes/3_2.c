#include<stdio.h>
#include<conio.h>
void main()
{
 float RicePrice,SugarPrice;
 printf("Enter the price of Rice:");
 scanf("%f",&RicePrice);
 printf("Enter the price of Sugar:");
 scanf("%f",&SugarPrice);
 printf("\n");
 printf("***LIST OF ITEMS***\n");
 printf("\n");
 printf("Item     Price\n");
 printf("Rice     Rs. %.2f\n",RicePrice);
 printf("Suger    Rs. %.2f\n",SugarPrice);
 getch();
 }
