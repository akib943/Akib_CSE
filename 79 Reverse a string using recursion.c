#include <stdio.h>
#include <string.h>

void reverse(char str[], int left, int right) {
    if (left >= right)
        return;

    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;

    reverse(str, left + 1, right - 1);
}

int main(void) {
    char str[500];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverse(str, 0, (int)strlen(str) - 1);
    printf("Reversed string: %s\n", str);

    return 0;
}
