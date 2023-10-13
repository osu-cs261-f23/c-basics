#include <stdio.h>
#include <stdlib.h>

struct student {
    char* name;
    int id;
    float gpa;
};

int main() {
    printf("== sizeof(int): %lu\n", sizeof(int));

    int* n_ptr = malloc(sizeof(int));
    *n_ptr = 16;

    printf("== n_ptr: %p\n", n_ptr);
    printf("== *n_ptr: %d\n", *n_ptr);

    int* array = malloc(5000 * sizeof(int));
    // *array = 16;
    // array[0] = 16;
    for (int i = 0; i < 5000; i++) {
        // *(array + i) = i;
        array[i] = i;
    }
    printf("\n\n== array: %p\n", array);
    printf("== array + 16: %p\n", array + 16);

    struct student* s = malloc(sizeof(struct student));
    // (*s).name = "Leia Organa";
    // (*s).gpa = 4.0;
    // (*s).id = 933111111;
    s->name = "Leia Organa";
    s->gpa = 4.0;
    s->id = 933111111;
    printf("%s (%d) gpa: %f\n", s->name, s->id, s->gpa);

    free(n_ptr);
    free(array);
    free(s);
}
