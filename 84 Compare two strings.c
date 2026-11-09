#include <stdio.h>
#include <string.h>

int main(void) {
    char first[500], second[500];

    printf("Enter the first string: ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(second, sizeof(second), stdin);
    second[strcspn(second, "\n")] = '\0';

    int result = strcmp(first, second);

    if (result == 0)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0;
}
