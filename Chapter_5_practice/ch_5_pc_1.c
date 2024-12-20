#include <stdio.h>

    
    float avg;

    float average (int a, int b, int c);
    
    float average (int a, int b, int c) {
        avg = (a+b+c)/3.0;
        printf("Average of three numbers is: %f",avg);
    }

int main() {
    
    average (17,158,88);

    return 0;
}