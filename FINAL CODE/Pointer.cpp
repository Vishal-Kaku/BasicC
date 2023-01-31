#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 20;
    int* ptr;
    ptr = &a; 
    //printf ("address of a=%d",*a);
    //printf ("address of a=%d",&a);
    printf ("value of ptr=%d \n",&ptr);
    printf ("value of ptr=%d \n",ptr);
    printf ("value of ptr=%d \n",*ptr);
    return 0;
}