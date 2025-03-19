# include <stdio.h>

// 상수 -> 대문자, 전역 변수로 만들어 관리를 편하게 함
const int N = 3;

int main(void)
{
    int scores[N]; // 지역 변수
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("%c, %c, %c", scores[0], scores[1], scores[2]);
}