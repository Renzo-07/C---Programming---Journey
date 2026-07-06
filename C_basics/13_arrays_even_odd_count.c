#include <stdio.h>

int main() {

    int nums[] = {12, 9, 7, 20, 15, 8};

    int even = 0;
    int odd = 0;

    for(int i = 0; i < 6; i++) {

        if(nums[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }

    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
