#include <stdio.h>
int main()
{
     int i,temp = 0;
     int a[5] = {10,34,76,34,67};
     for(i=0;i<5;i++)
     {
          printf("no. is = %d\n",a[i]);
          if(a[i] > temp)
             temp = a[i];
     }
     printf("biggest number is = %d",temp);
}