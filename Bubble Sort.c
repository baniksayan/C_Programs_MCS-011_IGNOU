#include <stdio.h>
int main()
{
    int arr[] = {5, 1, 4, 2, 8}; // sample array to sort
    int n = 5; // size of the array
    int i, j, temp; // variables for loops and swapping

    // print the original array
    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // bubble sort algorithm
    for (i = 0; i < n - 1; i++) // outer loop for passes
    {
        for (j = 0; j < n - i - 1; j++) // inner loop for comparisons
        {
            if (arr[j] > arr[j + 1]) // if the current element is greater than the next element
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
