#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    int result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // digit count
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += (int)round(pow(remainder, digits));
        temp /= 10;
    }

    if (result == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);
    return 0;
}
