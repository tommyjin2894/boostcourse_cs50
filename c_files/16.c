#include <stdlib.h>
#include <stdio.h>

int f(void)
{
    int *t = malloc(sizeof(int));
    t[0] = 10; // 없는 10 번째 value를 접근하려고 할때 버퍼 오버플로우가 발생
    for(int i = 0; i < 10; i++)
    {
        printf("%i", t[i]);        
    }
    free(t);
    return 0;
}

int main(void)
{
    f();
}