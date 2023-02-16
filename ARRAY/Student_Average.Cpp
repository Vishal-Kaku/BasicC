#include <stdio.h>
void getAverage(int studentNumber,int n){
    char m[30];
    int i,num[5];
    float sum=0,avg;
    printf("Enter name for student %d = ",studentNumber);
    scanf("%s",&m);
    for (i = 0; i < n; i++) {
        printf("Enter Number : ");
        scanf("%d", &num[i]); 
        sum = sum + num[i];    
    }
    printf("Sum Is =  %.f \n", sum );
    avg = sum / n;
    printf("Average marks of %s are = %.1f \n", m  , avg );
}
int main(){
    int n,subjectsNumber;
    printf("Enter the number of students = ");
    scanf("%d", &n);
    printf("Enter the number of subjects = ");
    scanf("%d", &subjectsNumber);
    for (int i = 0; i < n; i++) {
        getAverage(i+1,subjectsNumber);
    }
    return 0;
}
