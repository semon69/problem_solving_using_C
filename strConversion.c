#include <stdio.h>

int main()
{
    char str[100000];

    scanf("%s", str);
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        
        if (str[i] == ',')
        {
            str[i] = ' ';
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
}