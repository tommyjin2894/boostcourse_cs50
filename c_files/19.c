#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file=fopen("user.csv", "a");
    char *n;
    scanf("%s", *&n);

    int age;
    scanf("%i", &age);

    fprintf(file, "%s,%i\n",n, age);
}
