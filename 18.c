# include <stdio.h>

int main(void)
{
    char *x;
    printf("string input : ");
    scanf("%s", *&x);
    printf("%s\n", x);

    int y;
    printf("int input : ");
    scanf("%d", &y);
    printf("%d\n", y);
}