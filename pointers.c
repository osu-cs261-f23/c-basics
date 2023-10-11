#include <stdio.h>

struct container {
    void* value;
};

void insert_into_container(struct container c, void* value) {
    c.value = value;
}

void make_it_4(int* ptr) {
    printf("== in make_it_4(), ptr: %p\n", ptr);
    *ptr = 4;
}

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

    make_it_4(&n);

    printf("\n\n== n: %d\n", n);
    printf("== &n: %p\n", &n);
    printf("== n_ptr: %p\n", n_ptr);
    printf("== *n_ptr: %d\n", *n_ptr);

    void* v_ptr = &n;

    printf("\n\n== v_ptr: %p\n", v_ptr);

    // *v_ptr = 16;

    double pi = 3.1415;

    v_ptr = &pi;
    printf("\n\n== v_ptr: %p\n", v_ptr);
    printf("== &pi: %p\n", &pi);

    struct container c;
    // c.value = &pi;
    // c.value = &n;

    insert_into_container(c, &pi);

    return 0;
}
