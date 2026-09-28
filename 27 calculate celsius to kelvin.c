#include <stdio.h>

int main() {
    float c, k;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    k = c + 273.15;

    printf("%.2f Celsius = %.2f Kelvin\n", c, k);
    return 0;
}
