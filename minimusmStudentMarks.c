#include <stdio.h>

int main() {
    // Declare an array to store marks of 20 students
    int marks[20];

    // Input marks for each student
    printf("Enter the marks of 20 students:\n");
    for (int i = 0; i < 20; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Assume the minimum as the first element of the array
    int minimum = marks[0];

    // Iterate through the array to find the minimum marks
    for (int i = 1; i < 20; i++) {
        if (marks[i] < minimum) {
            minimum = marks[i];
        }
    }

    // Display the minimum marks
    printf("The minimum marks among the students are: %d\n", minimum);

    return 0;
}
