#include<stdio.h>
#include<math.h>
int main()
{
    float DemandRate, SetupCosts, HodlingCost, EOQ ,TBO;
    printf("Enter the Demand Rate: ");
    scanf("%f",&DemandRate);
    printf("Enter the Setup Rate: ");
    scanf("%f",&SetupCosts);
    printf("Enter the holding Cost per Unit: ");
    scanf("%f",&HodlingCost);
    EOQ= sqrt(2*DemandRate*SetupCosts/HodlingCost);
    TBO= sqrt(2*DemandRate/SetupCosts*HodlingCost);
    printf("The EOQ = %0.3f\n",EOQ);
    printf("The TBO = %0.3f",TBO);
    return 0;
}