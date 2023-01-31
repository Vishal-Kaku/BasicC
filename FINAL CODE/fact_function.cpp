#include <stdio.h>
int findfactorial(int number){
    int i,fact = 1;
    for(i=1;i<=number;i++){
        fact = fact * i;
    }
        return fact;
    }
int main(){
    int i,fact = 1,number;
    printf ("enter your number = ");
    scanf("%d",&number); 
    fact = findfactorial(number);
    printf("Factorial of %d is: %d",number,fact);  
    return 0;
}