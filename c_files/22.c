#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ints = malloc(3 * sizeof(int));
    ints[0] = 123456;
    ints[1] = 234567;
    ints[2] = 345678;

    for (int i = 0; i < 3; i ++)
    {
        printf("재 할당 전의 ints 의 주소 %p, 값 : %i\n", &ints[i], ints[i]);
    }

    // relloc 메모리 다시 할당
    printf("\n메모리 다시 할당\n");
    int *temp = realloc(ints,4* sizeof(int));
    temp[3] = 456789;

    // 주소 비교
    for (int i = 0; i < 4; i ++)
    {
        printf("재 할당 후의 ints 의 주소 %p, 값 : %i\n", &ints[i], ints[i]);
        printf("재 할당 후의 temp 의 주소 %p, 값 : %i\n", &temp[i], temp[i]); 
    }
}