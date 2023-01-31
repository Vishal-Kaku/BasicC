#include <stdio.h>
void checkeven(int x){
   int i,n;
   bool iseven= false;
        for(i=2;i<=n-1;i++){
        int rem;
        rem=n%i;
        if(rem == 0){
            iseven= true;
            break;
        }
    }
    if(iseven == false){
            printf("number is even");
    }else
            printf("number is not even");

 
}
int main(){
    int n;
    printf("enter the number to check even number = ");
    scanf("%d",&n);  
    checkeven(n);
}