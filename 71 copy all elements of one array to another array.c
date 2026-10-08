#include <stdio.h>

int main() {
    int src[100], dest[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &src[i]);

    for (i = 0; i < n; i++)
        dest[i] = src[i];

    printf("Copied array: ");
    for (i = 0; i < n; i++)
        printf("%d ", dest[i]);
    printf("\n");
    return 0;
}
