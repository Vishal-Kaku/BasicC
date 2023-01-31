#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
    char str [5];
    printf ("\n enter string = ");
    gets (str);
    printf("\n enter a string is %s",str);
    printf ("\n string after reverse is %s",strrev(str));
    getch ();
    return 0;
}