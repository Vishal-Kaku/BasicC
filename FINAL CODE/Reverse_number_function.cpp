 #include<stdio.h>  
 int reversenumber(int n){ 
    int rem,reverse=0;   
    while(n!=0)  
    {    
        rem=n%10;    
        reverse=(reverse*10)+rem;  
        printf("number is : %d \n ",reverse);      
        printf("remender is : %d \n ",rem);      
        n=n/10;    
    }    
    return reverse;
    }

int main(){   
    int n, reverse=0;    
    printf("Enter a number: ");    
    scanf("%d", &n);        
    reverse = reversenumber(n);
    printf("reverse number is : %d ",reverse);
    return 0;  
}   