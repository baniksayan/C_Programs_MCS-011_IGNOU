#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character
    str[strcspn(str, "\n")] = '\0';

    int start = 0;
    int end = strlen(str) - 1;
    int palindrome = 1; // Assume it's a palindrome

    while (start < end) {
        // Check if the characters at the current positions are equal
        if (str[start] != str[end]) {
            palindrome = 0; // Not a palindrome
            break;
        }

        start++;
        end--;
    }

    if (palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
