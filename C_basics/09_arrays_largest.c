#include <stdio.h>

int main() {

    int nums[] = {25, 14, 30, 8, 19};
    int largest = nums[0];

    for(int i = 0; i < 5; i++) {
        if(nums[i] > largest) {
            largest = nums[i];
        }
    }

    printf("Largest number: %d\n", largest);

    return 0;
}
