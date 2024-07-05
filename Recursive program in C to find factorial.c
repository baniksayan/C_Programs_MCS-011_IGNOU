#include <stdio.h>

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number between 1 and 10: ");
    scanf("%d", &num);
    
    if (num >= 1 && num <= 10) {
        int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    } else {
        printf("Invalid input. Please enter a number between 1 and 10.\n");
    }
    
    return 0;
}
