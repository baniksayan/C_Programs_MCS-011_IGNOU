#include <stdio.h>

//The matrix operation D = (A*B) + C
#define SIZE 3

int main() {
    int A[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[SIZE][SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[SIZE][SIZE] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int D[SIZE][SIZE];
    int i, j, k;

    // Multiply matrices A and B
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            D[i][j] = 0;
            for (k = 0; k < SIZE; k++) {
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Add matrix C to D
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            D[i][j] += C[i][j];
        }
    }

    // Print matrix D
    printf("Matrix D:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}
