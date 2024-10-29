#include <stdio.h>

int main()
{
    // int n, m;
    // scanf("%d %d", &n, &m);
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d ", i+j);
    //         // printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");

    // }

    // Check if scaler or not
    // Rules: Square matrix, Diagonal matrix hote hobe
    // Baki shob value 0 hote hobe

    int element = arr[0][0];
    int isScaler = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != element)
                {
                    isScaler = 0;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    isScaler = 0;
                    break;
                }
            }
        }
    }

    if (isScaler == 1)
    {
        printf("Scaler Matrix");
    }
    else
    {
        printf("Not a Scaler Matrix");
    }
}