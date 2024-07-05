#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file != NULL) {
        fputc('H', file);
        fputc('e', file);
        fputc('l', file);
        fputc('l', file);
        fputc('o', file);
        fclose(file);
    }
    return 0;
}
