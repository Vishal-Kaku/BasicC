#include <stdio.h>
int main(){
    int a[10];
    int n,temp=0,i,insertindex,num;
    printf("Enter The Number Of Elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element no %d ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter The Position Of Array To Insert = ");
    scanf("%d",&insertindex);
    printf("Enter The Number = ");
    scanf("%d",&num);
    for(i=n;i>insertindex;i--){
        a[i] = a[i - 1];
    }
    a[insertindex] = num;
    for(i=0;i<=n;i++){
        printf("%d \n",a[i]);
    }
    return 0;
    }