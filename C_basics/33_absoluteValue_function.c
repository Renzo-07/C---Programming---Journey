#include <stdio.h>

int absoluteValue(int number)
{
    if (number < 0)
    {
        return number * -1;
    }
    else
    {
        return number;
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int answer = absoluteValue(number);

    printf("The absolute value of %d is %d\n",
           number,
           answer);

    return 0;
}
