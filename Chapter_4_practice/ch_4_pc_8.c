#include <stdio.h>

int main() {
    
    int i=1;
    int fact = 1;
    int num;
    
    printf("Enter the number for getting the factoial:");
    scanf("%d",&num);
    
    while(i<=num){
        fact = fact*i;
        i++;
    }
    
    printf("The factorial is: %d",fact);

    return 0;
}