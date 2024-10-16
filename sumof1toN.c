#include <stdio.h>

int main()
{
    long long n,subs, sum;
    scanf("%lld", &n);
    subs = (n+1) * n;
    sum = subs / 2;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    printf("%lld\n", sum);
}