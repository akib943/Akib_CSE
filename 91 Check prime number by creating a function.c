#include <stdio.h>

int isPrime(int number) {
    if (number < 2)
        return 0;

    for (int i = 2; i <= number / i; i++) {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int main(void) {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is prime.\n", number);
    else
        printf("%d is not prime.\n", number);

    return 0;
}
