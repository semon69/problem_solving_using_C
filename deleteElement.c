#include <stdio.h>

int a[10000], b[10000];

int main()
{
    int length;
    scanf("%d", &length);

    a[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
        // printf("%d ", a[i]);
    }

    int index;
    scanf("%d", &index);
    length--;

    for (int i = index ; i < length; i++)
    {
        // printf("%d ", a[i + 1]);
        a[i] = a[i + 1];
    }

    for (int i = 0; i < length; i++)
    {
        // scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
}