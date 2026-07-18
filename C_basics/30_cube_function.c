#include <stdio.h>

// Returns the cube of a number
int cube(int number)
{
    return number * number * number;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The cube of %d is %d\n", number, cube(number));

    return 0;
}
