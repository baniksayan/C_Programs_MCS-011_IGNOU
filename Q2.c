#include <stdio.h>

int fibo(int n) { // Fibonacci Recursion Function.
    if (n <= 1) {
        return n;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main() {
    int t;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &t);

    printf("Fibonacci Series:\n");
    for (int i = 0; i < t; i++) {
        printf("%d ", fibo(i));
    }

    return 0;
}
