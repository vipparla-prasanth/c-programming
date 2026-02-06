#include <stdio.h>
#include <stdlib.h> // Required for memory functions

int main() {
    int *arr;
    int i;

    // 1. MALLOC: Allocate space for 2 integers
    // It gives a single block of memory. Values inside are "garbage" (random).
    arr = (int*) malloc(2 * sizeof(int));

    if (arr == NULL) { // Always check if allocation failed
        printf("Malloc failed!\n");
        return 1;
    }

    arr[0] = 10;
    arr[1] = 20;
    printf("Malloc values: %d, %d\n", arr[0], arr[1]);


    // 2. REALLOC: Change size to hold 4 integers instead of 2
    // It keeps existing data and adds more space.
    arr = (int*) realloc(arr, 4 * sizeof(int));

    if (arr == NULL) {
        printf("Realloc failed!\n");
        return 1;
    }

    arr[2] = 30; // Adding new values to the extra space
    arr[3] = 40;
    printf("Realloc (resized) values: %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3]);


    // 3. CALLOC: Allocate space for 3 NEW integers
    // Unlike malloc, calloc initializes all values to ZERO automatically.
    int *arr2 = (int*) calloc(3, sizeof(int));

    if (arr2 == NULL) {
        printf("Calloc failed!\n");
        free(arr); // Clean up previous memory before exiting
        return 1;
    }

    printf("Calloc default values (should be 0): %d, %d, %d\n", arr2[0], arr2[1], arr2[2]);


    // 4. FREE: Always release memory when finished to avoid "Memory Leaks"
    free(arr);
    free(arr2);

    printf("Memory successfully freed.\n");
    return 0;
}
