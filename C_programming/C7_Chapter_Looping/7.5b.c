#include<stdio.h>
void main()
{
int i,j,n,c;
printf("input:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
c=i;
if(c>j)
{
printf(" ");
c++;
}
else
printf("*");
}
printf("\n");

}
}
