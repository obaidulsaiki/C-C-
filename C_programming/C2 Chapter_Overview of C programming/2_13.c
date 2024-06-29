#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2, y1,y2, D;
    printf("Give the value of x1: ");
    scanf("%d",&x1);
    printf("Give the value of x2: ");
    scanf("%d",&x2);
    printf("Give the value of y1: ");
    scanf("%d",&y1);
    printf("Give the value of y2: ");
    scanf("%d",&y2);
    D= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("    the value of D:%d",D);
}
