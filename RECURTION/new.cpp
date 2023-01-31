#include <stdio.h>
int main(){
     int i,j,n=5,temp=0;
     int a[5] = {10,34,2,9,8};
     for(i=1;i<n;i++)
     {
        for(j=1;j<=n-i;j++){
          if(a[j] > a[j-1]){
            temp = a[j-1];
            a[j-1] = a[j];
            a[j]=temp;
          }
        }
     }

     for(i=0;i<n;i++)
     {
        printf(" %d \n",a[i]);
     }
    
}