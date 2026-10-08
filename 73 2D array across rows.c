#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, k, temp;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter %d elements:\n", r * c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    /* sort each row using bubble sort */
    for (i = 0; i < r; i++) {
        for (j = 0; j < c - 1; j++) {
            for (k = 0; k < c - j - 1; k++) {
                if (a[i][k] > a[i][k + 1]) {
                    temp = a[i][k];
                    a[i][k] = a[i][k + 1];
                    a[i][k + 1] = temp;
                }
            }
        }
    }

    printf("Array after sorting each row:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
