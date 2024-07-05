#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = 2;

    if (index < 0 || index >= n) {
        printf("Invalid index\n");
        return 1;
    }

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrement the size of the array

    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
