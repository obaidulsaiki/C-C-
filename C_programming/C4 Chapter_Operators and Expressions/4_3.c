#include<stdio.h>
int main()
{
int num,dcount,temp,i,j;
int array[20];
printf("\nEnter a number:");
scanf("%d",&num);
temp=num;
for(dcount=0;num!=0;num=num/10,dcount++);
for(i=dcount;i>0;i--)
{
array[i-1]=temp%10;
temp=temp/10;
}
printf("Required Pattern is:\n");
for(i=0;i<dcount;i++)
{
for(j=i;j<dcount;j++)
printf("%d\t",array[j]);
printf("\n");
}

}