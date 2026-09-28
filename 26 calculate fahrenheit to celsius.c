#include <stdio.h>

int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("%.2f Fahrenheit = %.2f Celsius\n", f, c);
    return 0;
}
