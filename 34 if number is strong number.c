#include <stdio.h>

int main() {
    int num, original, remainder, i;
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        int fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == original)
        printf("%d is a strong number\n", original);
    else
        printf("%d is not a strong number\n", original);
    return 0;
}
