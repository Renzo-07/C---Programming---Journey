#include <stdio.h>
#include <string.h>

int main() {

    // Create a character array to store the user's name
    char name[50];

    // Prompt the user to enter their first name
    printf("Enter your first name: ");

    // Read the user's input, including the newline character
    fgets(name, 50, stdin);
    
// Note: strlen() also counts the newline character ('\n') added by fgets()
    // Calculate the length of the string
    int length = strlen(name);

    // Display the number of characters in the string
    printf("The string contains %d characters.\n", length);

    return 0;
}
