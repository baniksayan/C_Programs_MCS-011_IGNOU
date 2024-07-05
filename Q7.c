#include <stdio.h>
int main()
{
    int i = 1;
loop:
    printf("%d ", i);
    i++;

    if (i <= 10) {
        goto loop;
    }

}