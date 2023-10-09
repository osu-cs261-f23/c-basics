#include <stdio.h>

int main() {
    int n = 16;
    int* n_ptr = &n;

    printf("== n: %d\n", n);
    printf("== &n: %p\n", &n);
    printf("== n_ptr: %p\n", n_ptr);
    printf("== *n_ptr: %d\n", *n_ptr);

    *n_ptr = 32;

    printf("\n\n== n: %d\n", n);
    printf("== &n: %p\n", &n);
    printf("== n_ptr: %p\n", n_ptr);
    printf("== *n_ptr: %d\n", *n_ptr);

    return 0;
}
