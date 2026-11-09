#include <stdio.h>

long long sumNaturalNumbers(int n) {
    if (n <= 0)
        return 0;

    return n + sumNaturalNumbers(n - 1);
}

int main(void) {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Sum from 1 to %d: %lld\n", n, sumNaturalNumbers(n));
    return 0;
}
