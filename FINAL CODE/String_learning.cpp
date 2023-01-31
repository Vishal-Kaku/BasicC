#include <stdio.h>
#include <cstring>
int main()
{
    char fatherName[20];
    char motherName[20];
    char dadiName[20];
    int fatherAge;
    int motherAge;
    int dadiAge;
    printf("Enter Father's name : ");
    scanf("%s",&fatherName);
    printf("Enter Father's age : ");
    scanf("%d",&fatherAge);


    printf("Enter Mother's name : ");
    scanf("%s",&motherName);
    printf("Enter mother's age : ");
    scanf("%d",&motherAge);

    
    printf("Enter dadi's name : ");
    scanf("%s",&dadiName);
    printf("Enter dadi's age : ");
    scanf("%d",&dadiAge);
    

    printf("father's name is %s\n father'S age is %d \n",fatherName, fatherAge);
    printf("mother's name is %s\n mother's age is %d\n",motherName,motherAge);
    printf("dadi's name is %s\n dadi's age is %d\n",dadiName,dadiAge); 
    int totalage = fatherAge + motherAge + dadiAge ;
    printf("total age of family is %d\n",totalage);
    getchar();
    return 0;
}