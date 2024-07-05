#include <stdio.h>

int main()
{
    int width, height, space, i, j, k, n = 1;
    printf("Please Enter Chirstmas Tree Width & Height = ");
    scanf("%d %d", &width, &height);
    space = width * height;
    printf("Printing Chirstmas Tree Pattern of Stars\n");
    for (int x = 1; x <= height; x++)
    {
        for (i = n; i <= width; i++)
        {
            for (j = space; j >= i; j--)
            {
                printf(" ");
            }
            for (k = 1; k <= i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
        n = n + 2;
        width = width + 2;
    }
    for (i = 1; i <= height - 1; i++)
    {
        for (j = space - 3; j >= 0; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= height - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
