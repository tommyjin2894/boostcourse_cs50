#include <stdio.h>

int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c \n", c1, c2, c3);
    printf("%i, %i, %i \n", (int) c1, (int) c2,(int) c3); // 아스키 코드 확인을 위한 형변환 (casting)
}