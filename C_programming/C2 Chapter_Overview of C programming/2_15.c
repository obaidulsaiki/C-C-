/*the lining joint of the point (2,2) and (5,6)
which lie on the circumference of a circle is the diameter of the cicle.
*/
#include<stdio.h>
#include<math.h>
#define pi 3.14
void main ()
{
    int x1=2,x2=5,y1=5,y2=6;
    float Diameter, radius ,area;
    Diameter= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    radius= Diameter/2;
    area= pi*radius*radius;
    printf(" the diameter:%f \n",Diameter);
    printf("Radius =%f\n",radius);
    printf("Area of the circle :%f",area);
}
