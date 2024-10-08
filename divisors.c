#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a == 0)
    {
        printf("0");
    }

    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d\n", i);
        }
    }
}
