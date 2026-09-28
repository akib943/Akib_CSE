#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, count = 0, inWord = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace((unsigned char)str[i]) && !inWord) {
            inWord = 1;
            count++;
        } else if (isspace((unsigned char)str[i])) {
            inWord = 0;
        }
    }

    printf("Number of words = %d\n", count);
    return 0;
}
