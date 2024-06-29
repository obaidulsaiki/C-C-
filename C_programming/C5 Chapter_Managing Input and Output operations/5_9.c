#include<stdio.h>

void main()
{
char a[2],b[11],c[3];
printf("Enter the string name:");
scanf("%4s%5s%5s",a,b,c);
printf("(a) %s %.1s. %s\n",a,b,c);
printf("(b) %.1s. %.1s %s\n",a,b,c);
printf("(c) %s   %.1s.%.1s",c,a,b);
}
