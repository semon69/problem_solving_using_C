#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    // for (int j = 0; j < n; j++)
    // {
    //     sum += a[j];
    // }
    if (sum < 0)
    {
        sum *= (-1);
    }
    printf("%lld\n", sum);

    return 0;
}
