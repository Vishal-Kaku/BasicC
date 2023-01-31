#include<stdio.h>  
 int sumofdigits(int n){ 
  int rem, sum=0;
  while(n!=0)    
  {    
    sum = sum + n%10;    
    n=n/10;    
  }    
  return sum;
 }
  int main(){   
    int n, sum=0, rem;    
    printf("Enter a number: ");    
    scanf("%d", &n);        
    sum = sumofdigits(n);
    printf("sum is: %d ",sum);
    return 0;  
}   