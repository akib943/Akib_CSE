#include <stdio.h>
#include <string.h>

int main(void) {
    char text[1000], words[200][100], result[1000] = "";
    int count = 0;

    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    char *word = strtok(text, " ");
    while (word != NULL) {
        int found = 0;

        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], word) == 0) {
                found = 1;
                break;
            }
        }

        if (!found && count < 200) {
            strcpy(words[count++], word);
        }

        word = strtok(NULL, " ");
    }

    for (int i = 0; i < count; i++) {
        if (i > 0)
            strcat(result, " ");
        strcat(result, words[i]);
    }

    printf("After removing duplicate words: %s\n", result);
    return 0;
}
