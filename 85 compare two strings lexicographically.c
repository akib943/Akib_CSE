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
        printf("Both strings are equal.\n");
    else if (result < 0)
        printf("\"%s\" comes before \"%s\".\n", first, second);
    else
        printf("\"%s\" comes after \"%s\".\n", first, second);

    return 0;
}
