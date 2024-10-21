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

    int index, value;
    scanf("%d %d", &index, &value);
    length++;
    for (int i = length - 1; i >= index; i--)
    {
        /* code */
        a[i + 1] = a[i];
    }

    a[index] = value;

    for (int i = 0; i < length; i++)
    {
        // scanf("%d", &a[i]);
        printf("%d ", a[i]);
    }
}