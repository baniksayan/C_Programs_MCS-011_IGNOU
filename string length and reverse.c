#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the trailing newline character

    // Finding the length of the string
    length = 0;
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    // Printing the reverse of the string
    printf("Reverse of the string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
