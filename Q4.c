#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    // Input the values of a and b
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);

    // Evaluate the expression c = a^b
    c = pow(a, b);

    // Display the result
    printf("%lf raised to the power %lf is %lf\n", a, b, c);

    return 0;
}
