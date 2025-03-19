#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string answer = get_string("당신의 이름은 무엇입니까? \n");
    // 동일할 시에는 0, 다를시에는 랜덤한 음수값을 출력
    if (strcmp(answer, "진형") == 0)
    {
        printf("정답입니다! %i", strcmp(answer, "진형"));
    }
    else
    {
        printf("틀렸습니다 %i", strcmp(answer, "진형"));
    }
    printf(" 안녕하세요, %s님\n", answer);
}
