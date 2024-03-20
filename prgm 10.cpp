#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int i = 0, j = strlen(str) - 1;

    // Loop until the pointers meet
    while (i < j) {
        // Ignore non-alphanumeric characters
        while (!isalnum(str[i]) && i < j) {
            i++;
        }
        while (!isalnum(str[j]) && i < j) {
            j--;
        }

        // If characters at current pointers are not equal, return false
        if (tolower(str[i]) != tolower(str[j])) {
            return 0; // Not a palindrome
        }

        // Move the pointers inward
        i++;
        j--;
    }
    // If the loop completes without finding any unequal characters, it's a palindrome
    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}
