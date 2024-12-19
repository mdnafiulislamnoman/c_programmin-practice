#include <stdio.h>

int main() {
    
    int n = 0;
    
    printf("Enter value of n:");
    scanf("%d",&n);
    
    int i = 0;
    
    do{
        if (i>0){
       printf("%d",i);
        }
       i++;
    }while(i<=n);

    return 0;
}