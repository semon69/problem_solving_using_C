#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int foundLucky = 0;  // Flag to track if any lucky number is found

    for (int i = a; i <= b; i++) {
        int n = i;
        int isLucky = 1;  // Assume the number is lucky

        // Check each digit of the number
        while (n > 0) {
            int digit = n % 10;  // Extract the last digit
            if (digit != 4 && digit != 7) {  // If any digit is not 4 or 7
                isLucky = 0;  // Mark it as not lucky
                break;
            }
            n /= 10;  // Remove the last digit
        }

        if (isLucky) {  // If the number is lucky
            printf("%d ", i);  // Print the lucky number
            foundLucky = 1;  // Mark that we found at least one lucky number
        }
    }

    if (!foundLucky) {
        printf("-1");  // If no lucky numbers were found, print -1
    }

    printf("\n");  // Add newline after output
    return 0;
}