#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        long long ft = 1;
        for (int j = 1; j <= n; j++)
        {
            ft *= j;
        }
        printf("%lld\n", ft);
    }
}