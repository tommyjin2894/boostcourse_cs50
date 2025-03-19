#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a;
    int *b;

    a = malloc(sizeof(int));
    // b = malloc(sizeof(int));

    *a = 10;
    b = a;

    *b = 20;

    printf("%i, %i \n", *a, *b); 
}