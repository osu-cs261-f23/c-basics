#include <stdio.h>
#include <string.h>

int main() {
    char* str = "cat";
    // str[2] = 'r';
    for (int i = 0; i < strlen(str); i++) {
        printf("== str[%d]: %c\n", i, str[i]);
    }

    char* copy = malloc((strlen(str) + 1) * sizeof(char));
}
