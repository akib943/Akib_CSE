#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *token = strtok(str, " ");

    printf("Substrings:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0
