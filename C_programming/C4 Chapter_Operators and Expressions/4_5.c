#include<stdio.h>
int main()
{
    float m;
    int n,p;
    printf("Enter the value of m: ");
    scanf("%f",&m);
    n=(m/1)+1;
    p=m;
    printf("%d %.2f %d " ,n,m,p);
    return 0;
}