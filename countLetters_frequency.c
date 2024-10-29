#include <stdio.h>
#include <string.h>

int main()
{
    int max_length = 1000000;
    char str[max_length];
    scanf("%s", str);
    int f[26] = {0};

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        // printf("%c\n", ch);
        int index = ch - 'a';
        // printf("%d\n", index);
        f[index] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i])
        {
            printf("%c : %d\n", 'a' + i, f[i]);
        }
    }

    return 0;
}