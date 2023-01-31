#include<stdio.h> 
int main(){
    int i,n;
    printf("enter the number to check prime = ");
    scanf("%d",&n);     
   bool isPrime= true;
        for(i=2;i<=n-1;i++){
        int rem;
        rem=n%i;
        if(rem == 0){
            isPrime= false;
            break;
        }
            

    }

    if(isPrime == false){
            printf("number is prime");
    }else
            printf("number is not prime");
        return 0;
}