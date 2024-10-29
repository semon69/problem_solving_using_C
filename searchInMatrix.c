#include <stdio.h>

int main()
{
    int n, m, x;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d ", &x);
    int isAvailable = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                isAvailable = 1;
                break;
            }
        }
    }

    if (isAvailable == 1)
    {

        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}