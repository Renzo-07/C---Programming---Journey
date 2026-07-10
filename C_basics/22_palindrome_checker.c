#include <stdio.h>
#include <string.h>

int main() {

    // Create a character array to store the user's word
    char text[100];

    // Assume the word is a palindrome
    int palindrome = 1;
  
// A palindrome is a word or phrase that reads the same forwards and backwards. E.g, racecar, level, e.t.c.
  
    // Prompt the user for input
    printf("Enter a word: ");

    // Read the user's input
    fgets(text, 100, stdin);

    // Remove the newline character added by fgets()
    text[strlen(text) - 1] = '\0';

    // Compare characters from both ends of the string
    for (int i = 0; i < strlen(text) / 2; i++) {

        if (text[i] != text[strlen(text) - 1 - i]) {

            palindrome = 0;
            break;

        }
    }

    // Display the result
    if (palindrome == 1)
        printf("The word is a palindrome.\n");
    else
        printf("The word is not a palindrome.\n");

    return 0;
}
