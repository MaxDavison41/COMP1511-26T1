// part1_variables
//
// This program was written by Max Davison z5492092,
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159

int main(void) {
	// 1. Declare the variables
	int radius;
	int area = 0;

    // 2. Initalise the variables
	printf("Enter the radius of the circle: ");
	scanf("%d", &radius);
	
    // 3. Calculate the area of the circle
	// pi*r^2
	area = PI * radius * radius;

	// 4. Print the result
	printf("The area of our circle is %d\n", area);
	return 0;
}
