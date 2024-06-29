#include<stdio.h>
int main()
{
    int Depreciation,PurchasePrice,SalvageValue,YearsOfService;
    printf("Enter Depreciation: ");
    scanf("%d",&Depreciation);
    printf("Enter Purchase Price: ");
    scanf("%d",&PurchasePrice);
    printf("Enter YearsOfService: ");
    scanf("%d",&YearsOfService);
    SalvageValue=Depreciation * YearsOfService-PurchasePrice;
    printf("The SalvageValue: %d",SalvageValue);
}