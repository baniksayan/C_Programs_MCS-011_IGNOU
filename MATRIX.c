// C program that performs the matrix operation D = (A * B) + C
#include <stdio.h>
int main()
{
    // define matrices a, b, c;
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

    // define matric d to store the result;
    int D[3][3];

    // perform matrix operation multiplication (a * b);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            D[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                D[i][j] = D[i][j] + (A[i][k] * B[k][j]);
            }
        }
    }
    // Perform matrix addition (D + C)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            D[i][j] += C[i][j];
        }
    }

    // display the resultant matrix d
    printf("result matrix D: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }
    return 0;
}