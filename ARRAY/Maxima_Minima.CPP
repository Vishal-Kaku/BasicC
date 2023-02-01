#include <stdio.h>
int main()
{
    int a[100];
    int i, mx, mn, n;
       printf("enter the no. of elements = ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
	    }
    mx = a[0];
    mn = a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>mx)
        {
            mx = a[i];
        }

        if(a[i]<mn)
        {
            mn = a[i];
        }
    }
    printf("Maximum number is : %d\n", mx);
    printf("Minimum number is : %d\n", mn);
}