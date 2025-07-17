// C program to insert given element at the beginning 
// of an array

#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 0};
    int n = 4; 
    int element = 50;

    printf("Array before insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Shift elements to the right
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the beginning
    arr[0] = element;

    printf("\nArray after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}