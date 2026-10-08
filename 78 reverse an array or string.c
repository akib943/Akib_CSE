#include <stdio.h>
#include <string.h>

int main() {
    int arr[100], n, i, temp;
    char str[100];
    int len;

    /* Part 1: reverse an array */
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    /* Part 2: reverse a string */
    printf("Enter a string: ");
    scanf("%99s", str);
    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        char t = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = t;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
