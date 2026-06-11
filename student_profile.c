include <stdio.h>

int main() {
    
    //STUDENT PROFILE
    char name[ ] = "Alex";
    int age = 18;
    float height = 6.1;
    char grade = 'A';
    int jambScore = 319;
    const int targetAge = 25;
    //calculating the timeline to target age
    int future = targetAge - age;
    int timeline = 5;
    /*calculating the age
    in five years*/ 
    int future2 = age + timeline;
    
    //OUTPUT
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f ft\n", height);
    printf("Grade: %c\n", grade);
    printf("JAMB SCORE: %d\n", jambScore);
    printf("Years Until 25: %d\n", future);
    printf("Age in 5 Yrs: %d\n", future2);
    return 0;
}