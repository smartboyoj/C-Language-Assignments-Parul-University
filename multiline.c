#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char input[MAX_LENGTH];

    printf("Enter multiline strings (Ctrl+D to end on Unix/Linux, Ctrl+Z on Windows):\n");

    // Read multiline input until EOF (Ctrl+D or Ctrl+Z)
    while (fgets(input, MAX_LENGTH, stdin) != NULL) {
        // Remove newline character at the end
        input[strcspn(input, "\n")] = '\0';

        // Print the length of the current string
        printf("Length: %zu\n", strlen(input));
    }

    return 0;
}