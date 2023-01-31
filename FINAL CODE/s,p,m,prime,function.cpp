#include <stdio.h>
int multiply(int w,int x,int y,int z){
    int result;
    result=(w*x*y*z);
    printf("%d * %d *  %d * %d is = %d\n",w,x,y,z,result);
 return result; 
}
int sum(int a,int b,int c){
    int result;
    result = a+b+c;
    printf("%d + %d + %d is = %d\n",a,b,c,result);
    return result;
}
int subtract(int x,int y){
    int result;
    result = x-y;
     printf("%d - %d is = %d\n",x,y,result);
    return result;
}
void primenumber(int x){
   int i,n;
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
}
int main(){
    int n;
    printf("enter the number to check prime = ");
    scanf("%d",&n);  
      int w,x,y,z,result;
     printf("enter first number:");  
     scanf("%d",&w);  
     printf("enter second number:");  
     scanf("%d",&x); 
     printf("enter third number:");  
     scanf("%d",&y);
      printf("enter fourth number:");  
     scanf("%d",&z); 
    result = multiply(w,x,y,z); 
    result=sum(w,x,y);
    result = subtract(w,x);
   primenumber(n);
}