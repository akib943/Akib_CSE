#include <stdio.h>
#include <string.h>

int main(void) {
    char original[1000], insert[500], result[1500];
    int position;

    printf("Enter the original string: ");
    fgets(original, sizeof(original), stdin);
    original[strcspn(original, "\n")] = '\0';

    printf("Enter the string to insert: ");
    fgets(insert, sizeof(insert), stdin);
    insert[strcspn(insert, "\n")] = '\0';

    printf("Enter insertion position: ");
    if (scanf("%d", &position) != 1) {
        printf("Invalid position.\n");
        return 1;
    }

    int originalLength = (int)strlen(original);

    if (position < 0 || position > originalLength) {
        printf("Position must be between 0 and %d.\n", originalLength);
        return 1;
    }

    strncpy(result, original, position);
    result[position] = '\0';
    strcat(result, insert);
    strcat(result, original + position);

    printf("Result: %s\n", result);
    return 0;
}
