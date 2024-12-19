#include <stdio.h>

int main() {
    
    int sum = 0;
    int i = 0;
   
    while(i<=10){
        sum +=i;
        i++;
    }
    printf("Sum of first 10 natural numbers is: %d",sum);
    return 0;
}