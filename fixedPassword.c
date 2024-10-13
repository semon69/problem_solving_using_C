#include <stdio.h>
#include <limits.h>

int main()
{
    int n = INT_MAX;
    int ps;
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &ps);
        if (ps == 1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
}