#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, digits, result;

    printf("Armstrong numbers between 1 and 1000:\n");
    for (num = 1; num <= 1000; num++) {
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
