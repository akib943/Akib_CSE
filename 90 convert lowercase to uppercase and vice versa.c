#include <stdio.h>
#include <ctype.h>

int main(void) {
    char text[1000];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)text[i];

        if (islower(ch))
            text[i] = (char)toupper(ch);
        else if (isupper(ch))
            text[i] = (char)tolower(ch);
    }

    printf("Converted string: %s", text);
    return 0;
}
