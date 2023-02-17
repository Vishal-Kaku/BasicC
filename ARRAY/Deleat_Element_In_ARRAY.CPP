#include <stdio.h>
int main(){
    int a[10];
    int n,i,location;
    printf("Enter The Number Of Elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element no %d = ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter The location Of Array To deleat = ");
    scanf("%d",&location);
    for(i=location;i<n;i++){
        a[i] = a[i + 1];
    }
    for(i=0;i<n-1;i++){
        printf("%d \n",a[i]);
    }
    return 0;
    }
