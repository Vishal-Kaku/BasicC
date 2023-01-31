#include <stdio.h>
 int main()
{
    int n;  
     printf("enter the number of rows = ");  
    scanf("%d",&n);   
    for(int i=1;i<=n;i++)  
    {
      for(int j=1;j<=n;j++)
      {
      if (j<=i)
      printf("* ");
      else
      printf("+ ");
      }
    printf("\n");
    }
    for(int i=n;i>=1;i--)  
    {
      for(int j=1;j<=n;j++)
      {
      if (j<=i)
      printf("* ");
      else
      printf("+ ");
      }
    printf("\n");
    }
    return 0;  
}