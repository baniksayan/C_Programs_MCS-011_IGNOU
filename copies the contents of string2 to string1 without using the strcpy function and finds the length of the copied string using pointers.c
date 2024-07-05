#include <stdio.h>

int main() {
    char string1[100], string2[100];
    char *ptr1, *ptr2;
    int length = 0;

    printf("Enter string2: ");
    scanf("%s", string2);

    // Copy string2 to string1 using pointers
    ptr1 = string1;
    ptr2 = string2;
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
        length++;
    }
    *ptr1 = '\0';  // Add null terminator at the end of string1

    printf("Copied string (string1): %s\n", string1);
    printf("Length of the copied string: %d\n", length);

    return 0;
}
