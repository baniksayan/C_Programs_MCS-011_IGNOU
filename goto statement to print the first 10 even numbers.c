#include <stdio.h>

int main() {
    int count = 1;  // Counter for even numbers
    int num = 0;    // Current number
    
loop:
    num = num + 2;       // Increment by 2 to get the next even number
    printf("%d\n", num);
    count++;

    if (count <= 10)
        goto loop;  // Jump back to the loop label
    
    return 0;
}
