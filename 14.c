# include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // 포인터 -> 주소

    // printf("%p\n", &n); // -> p : pointer, & : address of memory
    printf("%p\n", p); // same as upper line 
    printf("%i\n", *p); // 
}