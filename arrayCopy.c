#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before Copy\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d\n", a[i]);
        b[i] = a[i];
    }

    printf("\n");
    printf("After Copy\n");
    b[2] = 100;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}