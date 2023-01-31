#include <stdio.h>
int main(){
    int rem,n,i;
    printf("enter the number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
          rem = n%i;
        if(rem == 0){
         printf("factor of %d is = %d \n",n,i);
        }
    }
        return 0;
}