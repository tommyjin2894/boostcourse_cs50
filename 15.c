#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "hello";
    int n = strlen(s);

    char *t = malloc(n);
    for (int i = 0; i < (n + 1); i ++)
    {
        if(s[i] != '\0')
        {
            t[i] = s[i] - 32;
        }
        else
        {
            printf("encountered_null\n");
        }
    }

    printf("%s, %s \n", t, s);
    free(t);
}