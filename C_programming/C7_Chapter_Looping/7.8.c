#include<stdio.h>
#include<math.h>
void main()
{

int i,j;
float y;
printf("\n\n....................................\n");
printf("x");
for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {

            y=exp(-i);
            printf(" %.2f ",y);
        }
        printf("\n");

    }

}
