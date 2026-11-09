#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    double discriminant, realPart, imaginaryPart;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation because a is zero.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real roots: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        printf("One repeated real root: %.2f\n", root);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n",
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
