#include <stdio.h>

int main() {
    
    int sum = 0;
    int i;
   
    for(i=0;i<=10;i++){
        sum+=i;
    }
    
    printf("Sum of first ten integers is:%d",sum);
    return 0;
}