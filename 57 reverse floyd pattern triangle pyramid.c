#include <stdio.h>

int main() {
    int rows, i, j, num;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    num = rows * (rows + 1) / 2;   /* total numbers in the triangle */

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }
    return 0;
}
