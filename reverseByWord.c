#include <stdio.h>
#include <string.h>

// Function to reverse a word in-place
void reverseWord(char *start, char *end) {
    while (start < end) {
        // Swap characters at start and end
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers towards each other
        start++;
        end--;
    }
}

// Function to reverse individual words in a string
void reverseWords(char *str) {
    char *start = str;

    while (*str) {
        // If a space is encountered or it's the end of the string,
        // reverse the current word
        if (*str == ' ' || *str == '\0') {
            reverseWord(start, str - 1);
            start = str + 1;
        }

        // Move to the next character
        str++;
    }
}

int main() {
    char input[1000];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character at the end
    input[strcspn(input, "\n")] = '\0';

    // Reverse individual words in the string
    reverseWords(input);

    // Print the modified string
    printf("Reversed words: %s\n", input);

    return 0;
}
