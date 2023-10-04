#include <stdio.h>

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

    // Single line comment
    return 0;
}
