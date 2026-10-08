#include <stdio.h>

int main() {
    int arr[100], n, i, key, k = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to remove: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] != key)
            arr[k++] = arr[i];
    }
    n = k;

    printf("Array after removal: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
