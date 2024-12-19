#include <stdio.h>

int main() {
    int num, i = 2, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        while (i * i <= num) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
            i++;
        }
        if (is_prime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}