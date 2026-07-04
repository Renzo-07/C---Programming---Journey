#include <stdio.h>

int main() {

    int nums[] = {25, 14, 30, 8, 19};
    int smallest = nums[0];

    for(int i = 0; i < 5; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }

    printf("Smallest number: %d\n", smallest);

    return 0;
}
