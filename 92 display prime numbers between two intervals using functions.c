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
    int start, end;

    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d:\n", start, end);

    for (int number = start; number <= end; number++) {
        if (isPrime(number))
            printf("%d ", number);
    }

    printf("\n");
    return 0;
}
