#include<stdio.h>
void main()
{
    char Str1[5]="WORD";
    char Str2[11]="PROCESSING";
    printf("%s %s\n",Str1,Str2);
    printf("%s\n",Str1);
    printf("%s\n",Str2);
    printf("%.1s.",Str1);
    printf("%.1s. ",Str2);
}
//we have to take 1 number more than the word
//for example if there is 5 word we have to take str1[6]