#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[102], result[102];
    int i, j, k = 0, carry = 0, sum, len;

    printf("Enter first binary number: ");
    scanf("%99s", a);
    printf("Enter second binary number: ");
    scanf("%99s", b);

    i = strlen(a) - 1;
    j = strlen(b) - 1;

    while (i >= 0 || j >= 0 || carry) {
        sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        temp[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    temp[k] = '\0';

    /* temp holds the answer backwards, so reverse it */
    len = k;
    for (i = 0; i < len; i++)
        result[i] = temp[len - 1 - i];
    result[len] = '\0';

    printf("Sum = %s\n", result);
    return 0;
}
