#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    int seen[26] = {0};

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            int index = tolower((unsigned char)str[i]) - 'a';
            seen[index] = 1;
        }
    }

    int pangram = 1;
    for (int i = 0; i < 26; i++) {
        if (!seen[i]) {
            pangram = 0;
            break;
        }
    }

    if (pangram)
        printf("The string is a pangram.\n");
    else
        printf("The string is not a pangram.\n");

    return 0;
}
