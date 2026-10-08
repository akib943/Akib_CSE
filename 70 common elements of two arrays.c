#include <stdio.h>

int main() {
    int a[50], b[50];
    int n1, n2, i, j, k, found, alreadyPrinted, count = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    printf("Common elements: ");
    for (i = 0; i < n1; i++) {
        /* skip if this value already appeared earlier in a[] */
        alreadyPrinted = 0;
        for (k = 0; k < i; k++) {
            if (a[k] == a[i]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if (alreadyPrinted)
            continue;

        found = 0;
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if (found) {
            printf("%d ", a[i]);
            count++;
        }
    }

    if (count == 0)
        printf("None");
    printf("\n");
    return 0;
}
