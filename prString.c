#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    
    // Read the number of test cases
    scanf("%d", &n);

    char word[n][100];  // Array to store n words, each with a max length of 100

    // Read each word
    for (int i = 0; i < n; i++) {
        scanf("%s", word[i]);
    }

    // Process each word
    for (int i = 0; i < n; i++) {
        int length = strlen(word[i]);  // Get the length of the word

        if (length > 10) {
            // Print first character, length-2 characters in between, and the last character
            printf("%c%d%c\n", word[i][0], length - 2, word[i][length - 1]);
        } else {
            // Print the original word if its length is <= 10
            printf("%s\n", word[i]);
        }
    }

    return 0;
}
