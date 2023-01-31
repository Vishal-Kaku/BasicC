#include<stdio.h>


int myFunction(int x, int y) {
  return x + y;
}

int main(){ 
int x,y;   
printf("enter first number:");  
scanf("%d",&x);  
printf("enter second number:");  
scanf("%d",&y);  

int result = myFunction(x,y);
  printf("Result is = %d",result);
  return 0;
}    