#include<stdio.h>

long int factorial(int n){
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}


int main(){
    int n;
    printf("Enter your number = ");
    scanf("%d",&n);
    printf("Factorial of %d = %d",n, factorial(n));
    return 0;
}
