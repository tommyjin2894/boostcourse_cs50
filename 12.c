#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
    int height;
}
person;

int main(void)
{
    person people[4];

    people[0].name = "emma";
    people[0].number = "001";
    people[0].height = 165;

    people[1].name = "tomy";
    people[1].number = "002";
    people[1].height = 166;

    people[2].name = "jase";
    people[2].number = "042";
    people[2].height = 168;

    people[3].name = "youg";
    people[3].number = "942";
    people[3].height = 160;

    string name = get_string("이름 조회");
    for (int i = 0; i < 4; i++)
    {
        if(strcmp(people[i].name, name) == 0)
        {
            printf("이사람의 이름은%s\n", people[i].name);
            printf("이사람의 번호는%s\n", people[i].number);
            printf("이사람의 키는%i\n", people[i].height);
            return 0;
        }

    }
    return 1;
}
