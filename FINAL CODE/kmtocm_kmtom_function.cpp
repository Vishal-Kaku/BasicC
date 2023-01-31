#include<stdio.h>  
int kmtocm(int n){
    return n*1000*100;
}

int kmtom(int n){
    return n*1000;
}

int main(){
    int userInput = 1;
    while( userInput != 3 ){
        printf("Enter your choice \n" );
        printf("Press 1 for km to CENTIMETER conversion \n");
        printf("Press 2 for km to m  \n");
        printf("press 3 for exit \n");
        scanf("%d",&userInput);
        int n;
        printf("enter kms to convert: ");
        scanf("%d",&n);    
        if(userInput == 1){
            int result = kmtocm(n);
            printf("result is = %d \n\n\n",result);
        }else if( userInput == 2 ){
            int result = kmtom(n);
            printf("result is = %d \n\n\n",result);
        }    
    }
    return 0;
}

   