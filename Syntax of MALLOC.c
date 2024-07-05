#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int)); // Allocating memory for 5 integers

    // Use ptr to access the allocated memory

    free(ptr); // Release the allocated memory

    return 0;
}
