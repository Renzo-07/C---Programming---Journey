#include <stdio.h>
#include <string.h>

int main() {

    // Create a character array to store the sentence
    char text[100];

    // Initialize the word counter
    int wordCount = 0;

    // Prompt the user
    printf("Enter a sentence: ");

    // Read the sentence
    fgets(text, 100, stdin);

    // Remove the newline character if it exists
    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }

    // Count the beginning of each word
    for (int i = 0; i < strlen(text); i++) {

        if (text[i] != ' ' && (i == 0 || text[i - 1] == ' ')) {
            wordCount++;
        }

    }

    // Display the result
    printf("The sentence contains %d word(s).\n", wordCount);

    return 0;
}
