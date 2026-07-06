#include <stdio.h>

int main() {

    int nums[] = {10, 25, 18, 7, 30};
    int search;
    int found = 0;

    printf("Enter a number to search: ");
    scanf("%d", &search);

    for(int i = 0; i < 5; i++) {

        if(nums[i] == search) {
            printf("%d found at index %d\n", search, i);
            found = 1;
            break;
        }

    }

    if(found == 0) {
        printf("%d not found.\n", search);
    }

    return 0;
}
