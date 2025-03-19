# include <stdio.h>
# include <cs50.h>

float average(int n,int arr[]);

int main(void)
{
    int n = get_int("과목수");
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("과목 %i 의 점수 = ", i + 1);
    }
    printf("평균은 ? %f\n", average(n, scores));
}

float average(int n,int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (float)sum / (float)n;
}