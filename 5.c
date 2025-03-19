#include <stdio.h>
#include <unistd.h>
#include <time.h>

void sleep_ms(long long int milliseconds);

int main(void)
{
    for (long long int i = 1; ; i *= 2)
    {
        printf("%lld\n", i);
        sleep_ms(50);
    }
}

void sleep_ms(long long int milliseconds) {
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000;
    ts.tv_nsec = (milliseconds % 1000) * 1000000;
    nanosleep(&ts, NULL);
}

