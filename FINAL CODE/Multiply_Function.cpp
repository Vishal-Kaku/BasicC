#include <stdio.h>
int multiply(int w,int x,int y,int z){
    int result;
    result=(w*x*y*z);
 return result; 
}
int main(){
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
    printf("ressult of three numbers is %d\n",result);
}