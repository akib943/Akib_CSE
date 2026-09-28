#include <stdio.h>

int main() {
    int num, square, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    square = num * num;

    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }

    if (sum == num)
        printf("%d is a neon number\n", num);
    else
        printf("%d is not a neon number\n", num);
    return 0;
}
