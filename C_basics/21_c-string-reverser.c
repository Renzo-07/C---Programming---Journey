#include <stdio.h>
#include <string.h>

int main() {

    // Create a character array to store the user's input
    char text[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");

    // Read the user's input
    fgets(text, 100, stdin);

    // Remove the newline character added by fgets()
    text[strlen(text) - 1] = '\0';

    // Print the string in reverse order
    for (int i = strlen(text) - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }

    // Move to the next line after printing
    printf("\n");

    return 0;
}
