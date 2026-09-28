#include <stdio.h>
#include <math.h>

int main() {
    int low, high, num, temp, remainder, digits, result;

    printf("Enter lower and higher interval: ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d:\n", low, high);
    for (num = low; num <= high; num++) {
        digits = 0;
        temp = num;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        result = 0;
        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            result += (int)round(pow(remainder, digits));
            temp /= 10;
        }

        if (result == num)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
