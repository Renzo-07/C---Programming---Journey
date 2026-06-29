#include <stdio.h>

int main() {
    int number;
    
    //Step 1: Get a positive number
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    }
    while(number <=0);
    
    //Step 2: Count from 1 to the number
    for (int x = 1; x <= number; x++)
    {
        
        //Skip numbers divisible by 3
        if(x % 3==0)
        {
            continue;
        }
        j
        //Step 4: Stop when x reaches 20
        if(x==20)
        {
            break;
        }
        printf("%d\n", x);
    }
    return 0;
}
