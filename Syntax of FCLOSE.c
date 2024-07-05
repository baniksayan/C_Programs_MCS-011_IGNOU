#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r");
    if (file != NULL) {
        // Read from the file
        
        fclose(file); // Close the file
    }
    return 0;
}
