#include <stdio.h>
int main(){
    int n,table=1,i;
    printf("table ? = ");    
    scanf("%d",&n);  
    for(i=1;i<=10;i++){    
      table = n * i;
      printf("%d * %d = %d\n",n,i,table);
      }
      return 0;
}

