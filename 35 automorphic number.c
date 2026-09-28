#include <stdio.h>

int main() {
    int num, square, temp;
    printf("Enter an integer: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;
    int match = 1;

    while (temp > 0) {
        if (temp % 10 != square % 10) {
            match = 0;
            break;
        }
        temp /= 10;
        square /= 10;
    }

    if (match)
        printf("%d is an automorphic number\n", num);
    else
        printf("%d is not an automorphic number\n", num);
    return 0;
}
