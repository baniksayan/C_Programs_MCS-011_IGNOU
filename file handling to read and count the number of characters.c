#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int count = 0;

    printf("Enter the name of the .dot file: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Read the file character by character and count the characters
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    printf("The number of characters in the file is: %d\n", count);

    // Close the file
    fclose(file);

    return 0;
}
