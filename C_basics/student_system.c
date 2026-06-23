#include <stdio.h>

int main() {
    //Student Decision System
    char name[50];
printf("Enter Name: ");
    scanf("%s", name);
    printf("Name: %s\n", name);
    int age;
printf("Enter Age: ");
    scanf("%d", &age);
    printf("Age: %d\n", age);
    int score;
printf("Enter Score: ");
    scanf("%d", &score);
    printf("Score: %d\n", score);

printf("\n--- RESULT ---\n");

    //rules
    if(score>=80) {
        printf("EXCELLENT\n");
    }
   else if(score>=50) {
        printf("PASS\n");
   }
    else{
        printf("FAIL\n");
    }
    return 0;
}
    
