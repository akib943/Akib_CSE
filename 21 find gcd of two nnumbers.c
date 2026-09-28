#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);
    return 0;
}
