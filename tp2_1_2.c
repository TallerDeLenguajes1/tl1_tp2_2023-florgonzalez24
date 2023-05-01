#include <stdio.h>
#include <stdlib.h>

#define N 20

int main()
{
    int i, *punt;
    double vt[N];
    punt = &vt;

    for (i = 0; i < N; i++)
    {
        *punt = 1 + rand() % 100;
        printf("%d", *punt);
        punt++;
    }

    return 0;
}