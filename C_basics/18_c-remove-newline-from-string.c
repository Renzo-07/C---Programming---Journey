#include <stdio.h>
#include <string.h>

int main() {

    // Create a character array to store the user's full name
    char name[100];

    // Prompt the user to enter their full name
    printf("Enter your full name: ");

    // Read the user's input
    fgets(name, 100, stdin);

    // Remove the newline character added by fgets()
    name[strlen(name) - 1] = '\0';

    // Calculate the actual length of the string
    int length = strlen(name);

    // Display the cleaned string
    printf("Your name is %s\n", name);

    // Display the number of characters
    printf("The string contains %d characters.\n", length);

    return 0;
}
