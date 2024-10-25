#include <stdio.h>
#include <string.h>

int main()
{
    // char word1[1000], word2[1000], word3[1000];

    // scanf("%s %s %s", word1, word2, word3);

    // char *min_word = word1;
    // char *max_word = word1;

    // if (strcmp(word2, min_word) < 0)
    // {
    //     min_word = word2;
    // }
    // if (strcmp(word2, max_word) > 0)
    // {
    //     max_word = word2;
    // }

    // if (strcmp(word3, min_word) < 0)
    // {
    //     min_word = word3;
    // }
    // if (strcmp(word3, max_word) > 0)
    // {
    //     max_word = word3;
    // }

    // printf("%s\n", min_word);
    // printf("%s\n", max_word);
    char word1[1000], word2[1000], word3[1000];

    scanf("%s %s %s", word1, word2, word3);

    if (strcmp(word1, word2) <= 0 && strcmp(word1, word3) <= 0)
    {
        printf("%s\n", word1);
    }
    else if (strcmp(word2, word1) <= 0 && strcmp(word2, word3) <= 0)
    {
        printf("%s\n", word2);
    }
    else
    {
        printf("%s\n", word3);
    }

    if (strcmp(word1, word2) >= 0 && strcmp(word1, word3) >= 0)
    {
        printf("%s\n", word1);
    }
    else if (strcmp(word2, word1) >= 0 && strcmp(word2, word3) >= 0)
    {
        printf("%s\n", word2);
    }
    else
    {
        printf("%s\n", word3);
    }

    return 0;
}
