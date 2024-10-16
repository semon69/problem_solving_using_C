#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    for (int i = 1; i <= n; i++, k += 2)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    k -= 2;

    for (int i = n; i >= 1; i--, k -= 2)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
