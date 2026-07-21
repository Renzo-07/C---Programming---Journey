#include <stdio.h>

char getGrade(int score)
{
    if (score >= 70)
    {
        return 'A';
    }
    else if (score >= 60)
    {
        return 'B';
    }
    else if (score >= 50)
    {
        return 'C';
    }
    else if (score >= 45)
    {
        return 'D';
    }
    else if (score >= 40)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    int score;

    printf("Enter student's score: ");
    scanf("%d", &score);

    char grade = getGrade(score);

    printf("The student's grade is %c\n", grade);

    return 0;
}
