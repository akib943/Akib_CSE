#include <stdio.h>

unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;

    return (unsigned long long)n * factorial(n - 1);
}

int main(void) {
    int n;

    printf("Enter a non-negative integer (0–20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Please enter a number from 0 to 20.\n");
        return 1;
    }

    printf("%d! = %llu\n", n, factorial(n));
    return 0;
}
