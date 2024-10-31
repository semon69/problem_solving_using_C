#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * 1);
    int currentSize = 1;

    for (int i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);
        if (i >= currentSize)
        {
            currentSize++;
            arr = realloc(arr, sizeof(int) * currentSize);
        }

        arr[i] = number;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
