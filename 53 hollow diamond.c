#include <stdio.h>

int main() {
    int rows, i, j, space;
    printf("Enter number of rows (half height): ");
    scanf("%d", &rows);

    /* Upper half */
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    /* Lower half */
    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
