#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;

    for (int j = 0; j < n; j++)
    {
        sum += a[j];
    }
    printf("Sum: %d\n", sum);
    printf("Average: %.2lf", (double)sum / n);
    return 0;
}
