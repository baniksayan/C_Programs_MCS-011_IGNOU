#include <stdio.h>

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if target is present at the middle
        if (arr[mid] == target) {
            result = mid;
            break;
        }

        // If target greater, ignore left half
        if (arr[mid] < target)
            low = mid + 1;

        // If target is smaller, ignore right half
        else
            high = mid - 1;
    }

    if (result == -1)
        printf("Target element is not present in the array.\n");
    else
        printf("Target element is present at index %d.\n", result);

    return 0;
}
