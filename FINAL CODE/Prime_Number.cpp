#include<stdio.h> 
int main(){
    int i,n;
    printf("enter the number to check even = ");
    scanf("%d",&n);     
   bool iseven= true;
        for(i=2;i<=n-1;i++){
        int rem;
        rem=n%i;
        if(rem == 0){
            iseven= false;
            break;
        }
            

    }

    if(iseven == false){
            printf("number is even");
    }else
            printf("number is not even");
        return 0;
}
