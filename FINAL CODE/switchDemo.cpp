#include<stdio.h>  
int main(){
  char option;
  int a,b;
  printf("please enter option like \n");
  printf("addition for '+' \n" "subtract for '-' \n" "multiplication for '*' \n" "division is for '/' \n");
  scanf("%c",&option);
  printf("enter first number = ");
  scanf("%d",&a);
  printf("enter second number = ");
  scanf("%d",&b);

 /* switch(option){
    case '+' : printf("addition is %d",a+b);
               break;
    case '-' : printf("substraction is %d",a-b);
               break;
    case '*' : printf("multiplication is %d",a*b);
               break;
    case '/' : printf("division is %d",a/b);
               break;
    default  : printf("invalid choice \n");
  }*/
if(option == '+'){
    printf("addition is = %d\n",a+b);
}    
else if(option == '-'){
 printf("substraction is = %d\n",a-b);
}   
else if(option == '*'){
  printf("multiplication is = %d\n",a*b);
}
else if(option == '/'){
  printf("division  is = %d\n",a/b);
}else{
   printf("invalid choice \n");
}
return 0;
}