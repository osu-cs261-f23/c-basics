#include <stdio.h>
#include <stdlib.h>

int int_cmp(const void* a, const void* b) {
    const int* a_int = a;
    const int* b_int = b;
    if (*a_int > *b_int) {
        return 1;
    } else if (*a_int < *b_int) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int* array = malloc(16 * sizeof(int));
    printf("== before sorting:\n");
    for (int i = 0; i < 16; i++) {
        array[i] = rand() % 64;
        printf("  -- %d\n", array[i]);
    }

    qsort(array, 16, sizeof(int), int_cmp);

    printf("\n\n== after sorting:\n");
    for (int i = 0; i < 16; i++) {
        printf("  -- %d\n", array[i]);
    }
}
