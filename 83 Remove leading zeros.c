#include <stdio.h>
#include <string.h>

int main(void) {
    char number[500];

    printf("Enter a number: ");
    fgets(number, sizeof(number), stdin);
    number[strcspn(number, "\n")] = '\0';

    int i = 0;

    while (number[i] == '0')
        i++;

    if (number[i] == '\0')
        printf("After removing leading zeros: 0\n");
    else
        printf("After removing leading zeros: %s\n", number + i);

    return 0;
}
