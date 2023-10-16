#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* str = "cat";
    // str[2] = 'r';
    for (int i = 0; i < strlen(str); i++) {
        printf("== str[%d]: %c\n", i, str[i]);
    }

    char* copy = malloc((strlen(str) + 1) * sizeof(char));
    strncpy(copy, str, strlen(str) + 1);
    copy[2] = 'r';
    printf("== copy: %s\n", copy);
}
