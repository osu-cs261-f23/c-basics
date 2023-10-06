#include <stdio.h>

struct student {
    char* name;
    int id;
    float gpa;
};

void print_student_name(struct student s) {

}

int add_3_ints(int a, int b, int c);

void foo(int x) {
    printf("foo was passed this value: %d\n", x);
}

int main() {
    int n = 16;
    double d = 3.1415;
    float f = 3.1415;
    char c = 'a';

    n = 8;

    /*
     * Program goes here...
     */
    printf("Hello world!\n");

    printf(
        "%% The value of n is: %d\tf's value is: %f\n",
        n,
        f
    );

    if (n > 10) {
        printf("n is greater than 10\n");
    } else if (n < 0) {
        printf("n is negative\n");
    } else {
        printf("n is between 0 and 10\n");
    }

    for (int i = 0; i < 8; i++) {
        printf("-- i: %d\n", i);
    }

    int sum = add_3_ints(1, 2, 3);
    printf("sum: %d\n", sum);
    printf("add_3_ints(10, 11, 12): %d\n", add_3_ints(10, 11, 12));

    foo(32);

    struct student s;
    s.name = "Luke Skywalker";
    s.id = 933111111;
    s.gpa = 3.75;
    printf("%s (%d) gpa: %f\n", s.name, s.id, s.gpa);

    // Single line comment
    return 0;
}

int add_3_ints(int a, int b, int c) {
    return a + b + c;
}
