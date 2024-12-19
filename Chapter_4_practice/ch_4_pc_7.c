#include <stdio.h>

int main() {
    
    int it = 1;
    int fact;
    int num;
    
    printf("Enter the number for getting the factoial:");
    scanf("%d",&num);
    
    for(int i = 1; i<=num ; i++){
        it = it*i;
        fact = it;
    }
    
    printf("The factorial is: %d",fact);

    return 0;
}