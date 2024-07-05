#include <stdio.h>
int main()
{
    int x = 10, y = 28, a = 15, b = 20;
    if (x < y && a == b)
    {
        printf("x is less than y AND a is equal to b\n");
    }
    if (x < y || a == b)
    {
        printf("x is less than y OR a is equal to b\n");
    }
    if (!(x < y))
    {
        printf("NOT(x is less than y)\n");
    }
    return 0;
}
