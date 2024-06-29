#include<stdio.h>
#include<time.h>
void main()
{
    time_t tm; 
    time(&tm);
    printf("Current date/time =%s",ctime(&tm));


}
//this program will be run later
