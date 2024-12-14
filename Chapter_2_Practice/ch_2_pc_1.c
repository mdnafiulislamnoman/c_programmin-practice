#include <stdio.h>

int main (){
    int divider = 96, number,result;
    
    printf("Enter a number:");
    scanf("%d",&number);
    
    result = number % divider;
    
    if (result == 0){
        printf("Yes the number is divisible");
    }else{
        printf("Number is not divisible");
    }
}