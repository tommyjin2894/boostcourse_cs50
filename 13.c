#include <cs50.h>
#include <stdio.h>

void draw(int h);
void draw_answer(int h);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
    draw_answer(height);
}

/* my answer */
// 전역 변수 설정 후 재귀
int starting_point = 0;
void draw(int h)
{
    starting_point += 1;
    for (int i = 0; i < starting_point; i ++)
    {
        printf("#");
    }
    printf("\n");

    if (starting_point < h)
    {
        draw(h);
    }
}

/* teacher answer */
// -> 재귀 스택 및 후입 후출 (스택의 핵심 특징)
// Last-In-First-Out
void draw_answer(int h)
{
    if (h < 0)
    {
        return;
    }
    draw_answer(h - 1);
    for (int i = 0; i < h; i ++)
    {
        printf("#");
    }
    printf("\n");
}