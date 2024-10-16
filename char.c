#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        a -= 32;
    }
    else
    {
        a += 32;
    }
    printf("%c", a);
    return 0;
}




/*
#include <stdio.h>

int main()
{
    int a;
    scanf("%c", &a);

    if ('a' <= a && a <= 'z')
    {
        a -= 32;
    }
    else
    {
        a += 32;
    }

    printf("%c", a);

    return 0;
}

*/
