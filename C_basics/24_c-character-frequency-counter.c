#include <stdio.h>
#include <string.h>

int main() {

    // Store the sentence
    char text[100];

    // Store the character to search for
    char target;

    // Count how many times the character appears
    int count = 0;

    // Prompt the user
    printf("Enter a sentence: ");
    fgets(text, 100, stdin);

    // Remove the newline character
    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }

    // Ask which character to search for
    printf("Enter a character to search for: ");
    scanf(" %c", &target);

    // Check every character
    for (int i = 0; i < strlen(text); i++) {

        if (text[i] == target) {
            count++;
        }

    }

    // Display the result
    printf("The character '%c' appears %d time(s).\n", target, count);

    return 0;
}
