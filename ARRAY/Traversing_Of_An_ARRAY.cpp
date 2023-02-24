#include <stdio.h>
int main(){
    int a[100];
    int n,i;
    printf("Enter The Number Of Elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Element no.%d = ",i);
        scanf("%d",&a[i]);
    }
    printf("Elements Of Array Are \n");
    for(i=0;i<n;i++){
        printf("%d \n",a[i]);
    }
    return 0;
    }
