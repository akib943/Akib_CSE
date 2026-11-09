#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    a = abs(a);
    b = abs(b);

    printf("G.C.D. = %d\n", gcd(a, b));
    return 0;
}
