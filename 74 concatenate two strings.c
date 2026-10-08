#include <stdio.h>

int main() {
    char s1[100], s2[50];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%49s", s1);
    printf("Enter second string: ");
    scanf("%49s", s2);

    while (s1[i] != '\0')
        i++;                        /* move to end of s1 */

    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    printf("Concatenated string: %s\n", s1);
    return 0;
}
