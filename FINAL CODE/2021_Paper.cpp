#include <stdio.h>
#include <cstring>

void getBiggestNumber()
{
    int bn,a,b,c;
    printf("Enter 3 numbers = " );
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a>b)
        bn = a;
    else
        bn = b;

    if(c > bn )
        bn =c ;
    
    printf("biggest number is %d\n",bn);

}

void getPositiveNegativeNumber()
{
     int a;
    printf("Enter number = " );
    scanf("%d",&a);

    if(a>=0)
        printf("%d is a positive number\n",a);
    else
        printf("%d is a negative number\n",a);
    
    
}

void getFactorial(){
    int fact =  1,n ;
    printf("Enter your number = ");
    scanf("%d",&n);
    for (int j = 1; j <= n; j++)
    {
      fact = fact * j ;
    }
    printf("factorial of %d  is %d \n",n, fact);
}


int main()
{

    int userInput;
    printf("Enter your choice \n" );
    printf("Press 1 for biggest number \n");
    printf("Press 2 for positive negative number \n");
    printf("press 3 for factorial \n");
    printf("press 4 for exit \n");
    scanf("%d",&userInput);

    if(userInput == 1)
        getBiggestNumber();
    else if(userInput == 2)
        getPositiveNegativeNumber();
    else if(userInput == 3)
        getFactorial();

    return 0;
}



