#include<stdio.h>
void main()
{
int marks,count=0,a,b,c,d,i;
printf("Input 20 boy's marks\n");
for(i=1;i<=20;i++)
{
scanf("%d",&marks);
if(marks>80)
{
    count++;
    printf("Number of students who have obtained more than 80 marks=%d",count);
}
else if(marks>60)
{
    count++;
    printf("\nNumber of students who have obtained more than 60 marks=%d",count);
}
else if(marks>40)
{
    count++;
    printf("\n Number of students who have obtained more than 40 marks=%d",count);
}
else if(marks<=40)
{
    count++;
    printf("\n Number of students who have obtained 40 or less marks=%d",count);
}
}





}
