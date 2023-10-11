#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("== sizeof(int): %lu\n", sizeof(int));

    int* n_ptr = malloc(sizeof(int));
    *n_ptr = 16;

    printf("== n_ptr: %p\n", n_ptr);
    printf("== *n_ptr: %d\n", *n_ptr);

    int* array = malloc(5000 * sizeof(int));
    for (int i = 0; i < 5000; i++) {
        array[i] = i;
    }
}
