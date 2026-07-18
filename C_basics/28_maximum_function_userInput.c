#include <stdio.h>

int maximum (int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}
    
    int main() {
        
        int firstNumber, secondNumber;
        
       printf("Enter first number: ");
       scanf("%d", &firstNumber);
       printf("Enter second number: ");
       scanf("%d", &secondNumber);
       printf("\nThe larger number is: %d\n", maximum(firstNumber, secondNumber));
       return 0;
    }
