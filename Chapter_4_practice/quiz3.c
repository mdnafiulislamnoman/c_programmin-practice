#include <stdio.h>

int main() {
    
    int n = 0;
    
    printf("Enter value of n:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        printf("%d",i);
    }

    return 0;
}