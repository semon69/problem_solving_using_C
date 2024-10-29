#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int pri_diagonal = 0, sec_diagonal=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pri_diagonal += a[i][j];
            }
            if (i + j == n-1)
            {
                sec_diagonal += a[i][j];
            }
            
        }
    }

    printf("%d", abs(pri_diagonal - sec_diagonal));
}