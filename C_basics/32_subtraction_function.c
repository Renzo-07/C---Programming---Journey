#include <stdio.h>

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int answer = subtract(num1, num2);

    printf("The difference between %d and %d is %d\n",
           num1,
           num2,
           answer);

    return 0;
}
