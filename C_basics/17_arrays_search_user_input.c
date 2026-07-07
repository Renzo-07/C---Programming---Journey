#include <stdio.h>
int main() {
    int nums[10];
    int search;
    int found = 0;
    
   //Input 10 numbers into the array 
    for(int i = 0; i < 10; i++) {
    printf("\nEnter Number %d: ", i+1);
    scanf("%d", &nums[i]);
    }
    
    //Ask the user for the number to search 
    printf("\nEnter a number to search: ");
    scanf("%d", &search);
    
    //Search the array for the entered number
    for(int i = 0; i<10; i++) {
    if(nums[i]==search) {
        
        //Display the index if the number is found
        printf("\n%d found at index %d\n", search, i);
        
        //Update the flag and stop searching
        found = 1;
        break;
    }
}

//Display a mesaage if the number was not found
if(found==0) {
    printf("\n%d not found. \n", search);
}
return 0;
}
    
