#include <stdio.h>
// #include<string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char word[n][100];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%s\n", word[i]);
        int length = strlen(word[i]);
        if (length > 10)
        {
            printf("%c%d%c\n", word[i][0], length - 2, word[i][length - 1]);
        }
        else
        {
            printf("%s\n", word[i]);
        }
    }
    return 0;
}