#include<stdio.h>
#include<string.h>
void main()
{
  int marks;
  char name[20],f_name[20],m_name[20],padrs[40],pradrs[40],con_num[11];
  printf("Enter your marks: ");
  scanf("%d",&marks);
  if(marks>=70 && marks<=100)
  {
      printf("Complete your registration by giving information-\n");
   printf("Enter your name: ");
   scanf("%s",&name[20]);
   printf("Enter your Mother's name: ");
   scanf("%s",&m_name[20]);
   printf("Enter your Father's name: ");
   scanf("%s",&f_name[20]);
   printf("Enter your Present Address: ");
   scanf("%s",&padrs[40]);
   printf("Enter your Parmanent Address: ");
   scanf("%s",&pradrs[40]);
   printf("Enter your Contact Number: ");
   scanf("%s",&con_num[11]);
   printf("the length is %d",strlen(con_num));
   if(strlen(con_num)==10)
   {
      printf("Congratulations!Registration Successful.");
   }
   else{
    printf("Invalid Number.Please check again and re-enter your number");
   }
  }
  else{
    printf("SORRY!You are not allowed\n");
   }
}
