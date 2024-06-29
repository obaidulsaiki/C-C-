#include <stdio.h>
void main()
{
	 int i,n,positive=0,negative=0;
	 printf("Number want to input? = ");
	 scanf("%d",&n);
	 int a[n];
	 for ( i = 1; i <= n; i++)
	 {
		printf("Enter number%d :",i);
		scanf("%d",&a[i]);
	 }
	 for ( i = 1; i <= n; i++)
	 {
		if (a[i]>0)
		{
			positive++;
		}
		else
		{
			negative ++;
		}
				
	 }
	 printf("The number of positive Number :%d\n",positive);
	 printf("The number of Negative Number :%d\n",negative);
	 

}
