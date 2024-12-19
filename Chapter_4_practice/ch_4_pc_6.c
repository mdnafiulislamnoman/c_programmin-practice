#include <stdio.h>

int main() {
    
    int n = 0;
    int multiplication = 0;
    int sum=0;
    
    printf("Enter value of n:");
    scanf("%d",&n);
    
    for(int i = 1; i<=10; i++){
        multiplication = n * i;
        sum+=multiplication;
    }
    
    printf("Sum of numbers occuring in the multiplication table: %d",sum);

    return 0;
}