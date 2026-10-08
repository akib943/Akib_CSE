#include <stdio.h>

int main() {
    int arr[100], n, d, i, j, first;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);
    d = d % n;                      /* rotating n times = no change */

    for (i = 0; i < d; i++) {
        first = arr[0];
        for (j = 0; j < n - 1; j++)
            arr[j] = arr[j + 1];
        arr[n - 1] = first;
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
