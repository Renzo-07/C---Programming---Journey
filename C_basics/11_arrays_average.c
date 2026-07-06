#include <stdio.h>

int main() {
	int nums[10];
	int sum = 0;
	float average;
	
	//Input numbers and calculate the sum
	for(int i=0; i<10; i++) {
	    printf("Enter number %d: ", i+1);
	    scanf("%d", &nums[i]);
	sum+=nums[i];
	}
	
	//Calculate average
	average = (float) sum/10;
	
	//Display results
	printf("sum = %d\n", sum);
	printf("Average = %.2f\n", average);
	return 0;
	
}
