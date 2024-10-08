#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);

    b = a / 10;
    c = a % 10;
    if (c != 0 && (b % c == 0 || c % b == 0))
    {
        printf("YES\n");
    }
    else if (c == 0 && b == 0)
    {
        printf("NO\n");
    }
    else if (c == 0 && b != 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
