#include <stdio.h>
int main(){
    int n,i,num[5];
    float sum=0,avg;
    printf("Enter the avg number = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter number : ");
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("avg sum is =  %.f \n", sum );
    avg = sum / n;
    printf("Average = %.1f", avg );
    return 0;
}