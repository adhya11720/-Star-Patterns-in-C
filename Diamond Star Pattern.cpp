/*Diamond Star Pattern*/
#include <stdio.h>  
int main(void) {  
  int n;  
  printf("Enter the number of rows\n");  
  scanf("%d",&n);  
  int whitespace_in_pattern=n-1;  
  int stars_in_pattern=1;  
  for(int i=1;i<=n;i++)  
  {  
    for(int j=1;j<=whitespace_in_pattern;j++)  
    {  
      printf(" ");  
    }  
    for(int k=1;k<=stars_in_pattern;k++)  
    {  
      printf("*");  
    }  
    if(whitespace_in_pattern>i)  
    {  
      whitespace_in_pattern=whitespace_in_pattern-1;  
      stars_in_pattern=stars_in_pattern+2;  
    }  
    if(whitespace_in_pattern<i)  
    {  
      whitespace_in_pattern=whitespace_in_pattern+1;  
      stars_in_pattern=stars_in_pattern-2;  
    }  
    printf("\n");  
  }  
  return 0;}  
