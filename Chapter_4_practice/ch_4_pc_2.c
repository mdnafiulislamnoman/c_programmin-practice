#include <stdio.h>

int main() {
    
    int n = 0;
    int multiplication = 0;
    
    printf("Enter value of n:");
    scanf("%d",&n);
    
    for(int i = 10; i>=1; i--){
        multiplication = n * i;
        printf("%d*%d=%d\n",n,i,multiplication);
    }

    return 0;
}