#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int line_count = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file exists and can be opened
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Count the number of lines in the file
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            line_count++;
        }
    }

    // Close the file
    fclose(file);

    printf("The file '%s' has %d lines.\n", filename, line_count);

    return 0;
}
