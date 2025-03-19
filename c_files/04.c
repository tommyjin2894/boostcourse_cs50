#include <stdio.h>
#include <cs50.h>

// 미리 정의 함수 ------------------------------------------
void cough(int n);
int get_positive_int(void);

// 메인 함수 ----------------------------------------------
int main(void) // 메인 실행
{
    int i = get_positive_int();
    printf("기침 %i 번 진행!\n", i);

    cough(i);
}

// 이후 사용자 함수 정의-------------------------------------
int get_positive_int(void)
{
    int n;
    do
    {
        n=get_int("positive integer: ");
    }
    while(n < 1);
    return n;
}

void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}