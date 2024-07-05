#include <stdio.h>

int main() {
    int marks[10];
    int i, highest_marks;

    // Read marks from the user
    printf("Enter the marks for %d students:\n", 10);
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Find the highest marks
    highest_marks = marks[0];
    for (i = 1; i < 10; i++) {
        if (marks[i] > highest_marks) {
            highest_marks = marks[i];
        }
    }

    // Print the highest marks
    printf("The highest marks obtained by a student is: %d\n", highest_marks);
    return 0;
}
