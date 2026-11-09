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
    int number, found = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int first = 2; first <= number / 2; first++) {
        int second = number - first;

        if (isPrime(first) && isPrime(second)) {
            printf("%d = %d + %d\n", number, first, second);
            found = 1;
        }
    }

    if (!found)
        printf("%d cannot be expressed as the sum of two prime numbers.\n",
               number);

    return 0;
}
