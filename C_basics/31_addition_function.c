#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;
    printf("Enter number: ");
    scanf("%d", &num1);
    printf("Enter number: ");
    scanf("%d", &num2);
    printf("The sum of %d and %d is %d",num1, num2, add(num1, num2));
    return 0;
}
