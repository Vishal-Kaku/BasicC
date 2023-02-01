#include <stdio.h>
int main(){
    int a[10];
    int i,n,j,k,temp=0;
    printf("enter the no. of elements = ");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++){
        printf("element - %d : ",i,temp);
	    scanf("%d",&a[i]);
    }
    printf("unique elements are = ");
    for(i=0; i<n; i++){
        temp=0;
        for(j=0,k=n; j<k+1; j++){
            if (i!=j){
		       if(a[i]==a[j]){
                 temp++;
               }
            }
        }
        if(temp==0){
            printf("%d ",a[i]);
        }
    }
}