#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input: Reading two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Logical Error: Incorrect calculation of sum
    // The following line mistakenly multiplies instead of adding the numbers.
    sum = num1 * num2;

    // Output: Printing the result
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
