#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("당신의 나이는 몇 살입니까? \n");
    printf("당신은 최소 %i일을 살았습니다.\n", age * 365);

    float price = get_float("what's the price\n");
    printf("your total is %2f\n", price * 1.0625);

    int n = get_int("n : ");

    if (n % 2 == 0){
        printf("짝수 입니다.");
    } else {
        printf("홀수 입니다.");
    }
}