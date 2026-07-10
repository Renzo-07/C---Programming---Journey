#include <stdio.h>
#include <string.h>

int main() {
    char text [100];
    int digitCount = 0;
    
    printf("Enter a string: ");
    fgets(text, 100, stdin);
    
    //Remove the newline character
    text[strlen(text) - 1] = '\0';
    
    //Check every digit in the string
    for(int i = 0; i < strlen(text); i++) {
        if(text[i] >= '0' && text[i] <= '9') {
            digitCount++;
        }
    }
    printf("The string contains %d digits. \n", digitCount);
    return 0;
}
