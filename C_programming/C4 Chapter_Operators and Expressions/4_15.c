#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float SquareRoot=0;
    int Square=0;
    for ( i = 0; i <=100; i++)
    {
        SquareRoot=sqrt((float)i);
        Square=i*i;
        printf("%d\t%.2f\t%d\n",i,SquareRoot,Square);        
    }  

    return 0;


}