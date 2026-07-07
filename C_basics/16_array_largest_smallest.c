#include <stdio.h>

int main() {
    int nums[10];
    int largest;
    int smallest;
    
    //Input numbers
    for (int i = 0; i<10; i++) {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &nums[i]);
    }
    
    // Initialize largest and smallest with the first element
    largest = nums[0];
    smallest = nums[0];
    
    //Find largest and smallest number
    for(int i=0; i<10; i++) {
        if(nums[i] > largest) {
            largest = nums[i];
        }
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    
    //Display result
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
    return 0;
}
