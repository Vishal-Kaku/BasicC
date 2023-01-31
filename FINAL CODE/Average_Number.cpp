#include <stdio.h>
#include <cstring>
int main()
{
    int physicsmarks;
    int chemistrymarks;
    int mathmarks;
    int englishmarks;
    int computermarks;
    printf("Enter physics marks : ");
    scanf("%d",&physicsmarks);
    printf("Enter Chemistry marks : ");
    scanf("%d",&chemistrymarks);
    printf("Enter Maths marks : ");
    scanf("%d",&mathmarks);
    printf("enter english marks : ");
    scanf("%d",&englishmarks);
    printf("Enter computer marks : ");
    scanf("%d",&computermarks);
    

    printf("physics marks is %d \n",physicsmarks);
    printf("chemistry marks is %d\n",chemistrymarks);
    printf("math marks is %d\n",mathmarks);
    printf("english marks is %d\n",englishmarks);
    printf("computer marks is %d\n",computermarks);
   
    float avg = (physicsmarks + chemistrymarks + mathmarks + englishmarks + computermarks);
    avg = avg/5;
    printf("percentage  in +2 class is %0.2f\n",avg);
    getchar();
    return 0;
}