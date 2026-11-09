#include <stdio.h>

int main(void) {
    char text[1000];
    int count[256] = {0};

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++)
        count[(unsigned char)text[i]]++;

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (count[i] > 0)
            printf("'%c': %d\n", i, count[i]);
    }

    return 0;
}
