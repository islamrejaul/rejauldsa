#include <stdio.h>
int main()
{
int i;
    for (i = 1; i <= 100; i = i + 1)
    {
        if (i % 2 == 0)
        {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}