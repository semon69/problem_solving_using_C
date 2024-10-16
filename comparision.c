#include <stdio.h>

int main()
{
    int a, b;
    char x;
    scanf("%d %c %d", &a, &x, &b);
    if (x == '>')
    {
        if (a > b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else if (x == '<')
    {
        if (a < b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else
    {
        if (a == b)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}
