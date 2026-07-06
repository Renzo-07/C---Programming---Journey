#include <stdio.h>

int main() {

    // Declare and initialize a 3x2 multidimensional array
    int nums[3][2] = {
        {10, 20},
        {30, 40},
        {50, 60}
    };

    // Loop through each row
    for(int i = 0; i < 3; i++) {

        // Loop through each column in the current row
        for(int j = 0; j < 2; j++) {

            // Print each element in the array
            printf("%d ", nums[i][j]);

        }

        // Move to the next line after printing a row
        printf("\n");

    }

    return 0;
}
