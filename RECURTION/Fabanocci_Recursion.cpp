#include <stdio.h>
int fibonacci(int i){ 
    if(i==0) return 0; 
    else if(i==1) return 1; 
    else return (fibonacci(i-1)+fibonacci(i-2));
} 
    int main(){
    int n,i;
    printf("enetr the number = ");
    scanf("%d",&i);
    n = fibonacci(i);
    printf("fabanocci of %d is = %d",i,n);
    }