#include <stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
  for(j=1; j<=i; j++){
  if((i+j)%2==1){
     printf("0");
  }
  else{
      printf("1");
  }
}
printf("\n");
    }
}
