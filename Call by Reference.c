#include <stdio.h>

void modifyValue(int *x) {
    *x = *x + 10;
}

int main() {
    int num = 5;
    modifyValue(&num);
    printf("Value after modification: %d\n", num);
    return 0;
}
