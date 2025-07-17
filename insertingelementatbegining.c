#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40}; // Preallocate size
    int n = 4;                       // Current number of elements
    int element = 50;               // Element to insert at the beginning

    printf("Array before insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Shift elements to the right
    for (int i = n; i > 0; i--)
        arr[i] = arr[i - 1];

    // Insert element at beginning
    arr[0] = element;
    n++; // Increase size after insertion

    printf("\nArray after insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
