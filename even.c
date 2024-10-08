#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a == 1)
    {
        printf("%d", -1);
    }

    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}
