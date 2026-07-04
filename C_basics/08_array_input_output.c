#include <stdio.h>

int main() {

    int scores[5];

    // Input
    for(int i = 0; i < 5; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("\nYou entered:\n");

    // Output
    for(int i = 0; i < 5; i++) {
        printf("%d\n", scores[i]);
    }

    return 0;
}
