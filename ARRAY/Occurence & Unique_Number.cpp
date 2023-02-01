//This program takes array as input, print occurence of each character and print unique elements.
#include <stdio.h>
int main(){
    int a[10];
    int i,n,j,temp=0;
    printf("enter the no. of elements = ");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++){
        printf("element - %d : ",i,temp);
	    scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        temp=0;
        for(j=0; j<n; j++){
            if (a[i]==a[j]){
                temp++;
            }
        }
    if(temp == 1)
        printf("Unique number is = %d\n",a[i]);    
    
    printf("Occurence of %d is = %d\n",a[i],temp);

    }

}