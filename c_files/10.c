#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("input : ");
    printf("output : ");
    //int n = strlen(s);
    //for (int i = 0; i < n; i++)
    //
    // string 을 char 로 출력
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    // 소문자를 대문자로 출력
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - ('a' - 'A');
        }
        printf("%c", s[i]);
    }
    printf("\n");

    // ctype.h 라이브러리 이용하기
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            printf("%c", toupper(s[i]));
            printf("%c", tolower(s[i]));
        }
        printf("\n");
}