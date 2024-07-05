#include <stdio.h>

#define POLYNOMIAL(x) (5 * (x) * (x) * (x) + 2 * (x) + 3)

int main() {
    int x = 2;
    int result = POLYNOMIAL(x);
    printf("Result: %d\n", result);

    return 0;
}
