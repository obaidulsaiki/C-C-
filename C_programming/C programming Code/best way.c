#include<stdio.h>
#include<time.h>
#include<conio.h>
void Access_menu();
void main()
    {
        char choice=' ';
        printf("              ==============================          \n");
        printf("                   Food Ordering System          \n ");
        printf("             ==============================          \n\n");
        printf("\t\tEnter [A] -> To access Menu :\n");
        printf("\t\tEnter [B] -> Exit\n\n");
        printf("              ==============================          \n");
        time_t t;   // not a primitive datatype
        time(&t);
        printf("\t\t %s", ctime(&t));
        printf("              ==============================          \n\n");
        printf("\t      Please Enter Your Choice: ");
        scanf("%c",&choice);
        if (toupper(choice) == 'A')
            {
            Access_menu();
            }

        else if (toupper(choice) == 'B')
            {
                return 0;
            }
    }
void Access_menu()
{
  int choice = 0,option;
  float total;
  int quantity = 0;
  int again = 0;
  printf("\t            ==============================          \n");
  printf("\t                    breakfast Menu   \n");
  printf("\t            ==============================          \n\n");
  printf("\t   [1] Ruti                               - Rs.010 \n");
  printf("\t   [2] Daal                               - Rs.015 \n");
  printf("\t   [3] Vegetables                         - Rs.015 \n");
  printf("\t   [4] Fried egg                          - Rs.010 \n");
  printf("\t   [5] Noodles                            - Rs.025 \n");
  printf("\t   [6] Kichuri                            - Rs.035 \n");
  printf("\t            ==============================          \n");
  printf("\t                    lunch Menu   \n");
  printf("\t            ==============================          \n\n");
  printf("\t  [7] bhat                                - Rs.030 \n");
  printf("\t  [8] bhorta                              - Rs.010 \n");
  printf("\t  [9] Fried rice                          - Rs.040 \n");
  printf("\t [10] Fried rice                          - Rs.040 \n");
  printf("\t [11] Chicken biriyani                    - Rs.110 \n");
  printf("\t [12] beef biriyani                       - Rs.125 \n");
  printf("\t [13] kacchi                              - Rs.100 \n");
  printf("\t            ==============================          \n");
  printf("\t                    Snacks Menu   \n");
  printf("\t            ==============================          \n\n");
  printf("\t [14] Chicken Burger                      - Rs.160 \n");
  printf("\t [15] beef Burger                         - Rs.180 \n");
  printf("\t [16] sandwich                            - Rs.070 \n");
  printf("\t [17] Swarma                              - Rs.080 \n");
  printf("\t [18] Shingara                            - Rs.010 \n");
  printf("Enter your choice:");
  scanf("%d",&choice);
    if(choice==1)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*10;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==2)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*15;
         printf("\nYour total bill amount is Rs.%.2f\n\n", total);
    }
    else if(choice==3)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*10;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==4)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*15;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==5)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*25;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==6)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*35;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==7)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*30;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    if(choice==8)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*10;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==9)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*40;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==10)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*40;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    if(choice==11)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*110;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    if(choice==12)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*125;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==13)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*100;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==14)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*160;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==15)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*180;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==16)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*70;
         printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==17)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*80;
        printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    else if(choice==18)
    {
        printf("Please enter the quantity:");
        scanf("%d",&quantity);
        total=quantity*10;
        printf("\nYour total bill amount is Rs.%.2f\nPayment: CASH\n", total);
    }
    printf("How do you want to pay?\n");
         printf("\toption 1: Bkash\n");
         printf("\toption 2: Cash\n");
         printf("\tEnter the option:");
         scanf("%d",&option);
         if(option==1)
         {
             printf(" payment:Bkash done.");
         }
         else if(option==2)
         {
             printf("payment:cash done");
         }
         else
         {
             printf("not a valid option");
         }
}
