#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,S;
    float Area;
    printf("print the values of a:");
    scanf("%d", &a);
    printf("print the values of b:");
    scanf("%d", &b);
    printf("print the values of c:");
    scanf("%d", &c);
    S=(a+b+c)/2;
    Area = sqrt(S*(S-a)*(S-b)*(S-c));
    printf(" the value of S:%d\n Area :%f",S,Area);

}
