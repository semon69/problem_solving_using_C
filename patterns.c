#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (char c = 'A'; c < 'A' + a; c++)
    {
        for (char j = 1; j <= (c - 'A' + 1); j++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }

    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //         // printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    //   for (int i = a; i >= 1; i--)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         // printf("* ");
    //         printf("%d ", j);
    //         // a--;
    //     }
    //     printf("\n");
    // }

    return 0;
}
