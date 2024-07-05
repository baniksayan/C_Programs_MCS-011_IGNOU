#include <stdio.h>

int main() {
    int matrix[6][6];
    double sum = 0;
    int count = 0;

    printf("Enter elements of the 6x6 matrix:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
                count++;
            }
        }
    }

    if (count != 0) {
        double average = sum / count;
        printf("Average of diagonal elements: %lf\n", average);
    } else {
        printf("Diagonal elements not found.\n");
    }

    return 0;
}
