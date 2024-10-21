#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    char str[n+1];
    scanf("%s", str);
    // fgets(str, sizeof(20), stdin);

    // printf("%d\n", n);
    // printf("%s", str);
    int num = 0;
    // int digit = '1' - '0';
    // printf("%d", digit);
    for (int i = 0; i < n; i++)
    {
        int digit = str[i] - '0';
        num = num  * 10 + digit;
    }
    printf("%d", num);
}