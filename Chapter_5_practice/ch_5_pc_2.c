#include <stdio.h>

    
    float faren(float cel);
    
    float faren (float cel){
        float farenheit = cel * 1.8 + 32;
        return farenheit;
    }
    

int main() {
    float cel = 98.4;
    printf("Converted temparature in farenheit is : %.2f", faren (cel));
    return 0;
}