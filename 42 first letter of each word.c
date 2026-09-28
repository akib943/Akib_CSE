#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("First letters: ");
    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace((unsigned char)str[i]) &&
            (i == 0 || isspace((unsigned char)str[i - 1]))) {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
