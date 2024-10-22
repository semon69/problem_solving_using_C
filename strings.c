#include <stdio.h>

int main()
{
    char word1[100];
    char word2[100];
    scanf("%s", word1);
    scanf("%s", word2);

    int l1 = strlen(word1);
    int l2 = strlen(word2);

    printf("%d %d\n", l1, l2);
    printf("%s%s\n", word1, word2);

    char temp = word1[0];
    word1[0] = word2[0];
    word2[0] = temp;
    printf("%s %s", word1, word2);

    return 0;
}