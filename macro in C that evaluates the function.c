#include <stdio.h>

#define F(x) (2*(x)*(x) + 3*(x) + 5)

int main() {
    int x = 2;
    int result = F(x);
    printf("f(%d) = %d\n", x, result);

    return 0;
}
