#include <stdio.h>

int main() {
    int matrix1[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    int matrix2[3][3] = {{9, 8, 7},
                         {6, 5, 4},
                         {3, 2, 1}};

    int choice;
    int result[3][3];
    int i, j;

    printf("Menu:\n");
    printf("1. Addition of two matrices\n");
    printf("2. Subtraction of two matrices\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum of the matrices:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                    printf("%d\t", result[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Difference of the matrices:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                    printf("%d\t", result[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
