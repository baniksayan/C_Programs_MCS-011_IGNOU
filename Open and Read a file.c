#include <stdio.h>

int main() {
    FILE *file = fopen("My.TXT", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char ch;
    printf("Content of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
    return 0;
}
