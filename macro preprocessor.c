#include <stdio.h>

#define VALUE 10

int main() {
    #if VALUE > 5
        printf("The value is greater than 5.\n");
    #else
        printf("The value is not greater than 5.\n");
    #endif

    return 0;
}
