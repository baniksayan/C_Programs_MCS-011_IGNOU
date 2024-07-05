#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int vowelCount[5] = {0}; // Array to store the count of each vowel

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i < strlen(string); i++) {
        char ch = tolower(string[i]); // Convert character to lowercase for easier comparison

        if (ch == 'a') {
            vowelCount[0]++;
        } else if (ch == 'e') {
            vowelCount[1]++;
        } else if (ch == 'i') {
            vowelCount[2]++;
        } else if (ch == 'o') {
            vowelCount[3]++;
        } else if (ch == 'u') {
            vowelCount[4]++;
        }
    }

    printf("Individual vowel counts:\n");
    printf("A: %d\n", vowelCount[0]);
    printf("E: %d\n", vowelCount[1]);
    printf("I: %d\n", vowelCount[2]);
    printf("O: %d\n", vowelCount[3]);
    printf("U: %d\n", vowelCount[4]);

    return 0;
}
