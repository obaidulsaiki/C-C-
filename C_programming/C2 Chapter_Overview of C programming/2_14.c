#include<stdio.h>
#include<math.h>
#define pi 3.1416
void main ()
{
    int x1=0,y1=0,x2=4,y2=5;
    float perimeter, area,r;
    r= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    perimeter=2*pi*r;
    area = pi*r*r;
    printf("perimeter of the circle is %f \n the Area of the circle is %f",perimeter,area);

}
