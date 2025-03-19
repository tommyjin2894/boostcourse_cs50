#include <cs50.h>
#include <stdio.h>

#define EXPECTED_ARG_COUNT 2
#define MAX_ARG_COUNT 3

int main(int argc, string argv[]) {
    if (argc == EXPECTED_ARG_COUNT) {
        printf("Hello, %s!\n", argv[1]);
        return 0;
    }

    if (argc > MAX_ARG_COUNT) {
        fprintf(stderr, "Error: Too many arguments.\n");
        return 1;
    }

    printf("Hello, World!\n");
    return 0;
}