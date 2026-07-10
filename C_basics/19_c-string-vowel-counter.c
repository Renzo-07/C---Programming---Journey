#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int vowelCount = 0;
    
    printf("Enter a string: ");
    fgets(text, 100, stdin);
    
    //Remove the newline character
    text[strlen(text) - 1] = '\0';
    
    //Check every character in the string
    for(int i = 0; i < strlen(text); i++) {
        if(text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U' || text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
            vowelCount++;
        }
    }
    printf("The string contains %d vowels. \n", vowelCount);
    return 0;
}
