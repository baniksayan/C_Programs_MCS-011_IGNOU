#include <stdio.h>

void copyString(char *src, char *dest) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Add null-terminator to the destination string
}

int main() {
    char source[] = "Hello, world!";
    char destination[20]; // Make sure the destination array is large enough

    copyString(source, destination);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    printf("Length of the copied string: %d\n", strlen(destination));

    return 0;
}
