#include <stdio.h>

int i = 0;
int x = 1;
int y = 2;
int main(void)
{
    if (x < y)
    {
        printf("x 는 y 보다 작다\n");
    }
    else if (x > y)
    {
        printf("x 는 y 보다 크다\n");
    }
    else
    {
        printf("x 는 y 와 같다.");
    }
///////////////////////////////////////////////////
    while (i < 10)
    {
        i++;
        printf("while 문 %d\n",i);
    }
///////////////////////////////////////////////////
    for (int i = 1; i < 10; i++)
    {
        printf("for 문 %d\n",i);
    }
    
}