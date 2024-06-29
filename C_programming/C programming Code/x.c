#include<stdio.h>
void main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>80){
		printf("First class");
	}
	else if(marks>70){
		printf("Second class");
	}
	else if(marks>60){
		printf("Third class");
	}
	else{
		printf("Fourth class");
	}
}

