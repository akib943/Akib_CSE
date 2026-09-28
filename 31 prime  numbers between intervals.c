#include <stdio.h>

int main() {
    int low, high, i, num, flag;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d:\n", low, high);
    for (num = low; num <= high; num++) {
        if (num <= 1)
            continue;

        flag = 0;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}
