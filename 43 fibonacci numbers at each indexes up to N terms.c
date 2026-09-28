#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, next, sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Series: F0=0, F1=1, F2=1, F3=2, F4=3, F5=5, ...
    for (i = 0; i < n; i++) {
        if (i % 2 == 0)
            sum += a;
        next = a + b;
        a = b;
        b = next;
    }

    printf("Sum of Fibonacci numbers at even indexes = %lld\n", sum);
    return 0;
}
